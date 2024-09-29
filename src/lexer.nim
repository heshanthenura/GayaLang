type
    TokenType = enum
        ttPrint,
        ttString,
        ttEOF

type
  Token = object
    kind: TokenType   # Type of the token
    value: string     # Actual string value of the token
