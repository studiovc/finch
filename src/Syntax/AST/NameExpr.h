#pragma once

#include <iostream>

#include "Macros.h"
#include "Expr.h"
#include "FinchString.h"
#include "IExprVisitor.h"

namespace Finch
{
    using std::ostream;
    
    // AST node for a named object: "foo"
    class NameExpr : public Expr
    {
    public:
        NameExpr(String name)
        :   mName(name)
        {}
        
        String GetName() { return mName; }
        
        virtual void Trace(ostream & stream) const
        {
            stream << mName;
        }
        
        EXPRESSION_VISITOR
        
    private:
        String mName;
    };
}
