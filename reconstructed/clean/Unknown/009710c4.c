// Function: FUN_009710c4
// Address: 009710c4
// Size: 611 bytes
// Class: Unknown

uint64_t FUN_009710c4(uint *param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  char unaff_SIL;
  uint unaff_EDI;
  uint64_t uVar4;
  
  if (param_1 == (uint *)0x0) {
    uVar3 = 99;
  }
  else {
    if (unaff_SIL != '\0') {
      FUN_0096963a(param_1,0x10);
    }
    param_1[0xba] = 0;
    uVar3 = 0xcb;
    if ((unaff_EDI < 4) && ((unaff_SIL != '\0' || (uVar3 = 0, *param_1 != unaff_EDI)))) {
      puVar1 = *(uint **)(&g_02520520 + (uint64_t)unaff_EDI * 8);
      *param_1 = 0xffffffff;
      uVar2 = puVar1[2];
      param_1[1] = uVar2;
      if (uVar2 == 0) {
        uVar3 = 0xca;
      }
      else {
        if (*puVar1 < 4) {
          uVar2 = puVar1[1];
        }
        else {
          uVar2 = 0;
        }
        param_1[0x5e] = uVar2;
        if (unaff_SIL != '\0') {
          FUN_0096dfbe();
          FUN_0096dfbe();
          FUN_0096dfbe();
          FUN_0096dfbe();
          FUN_0096dfbe();
          FUN_0096dfbe();
        }
        uVar3 = FUN_0096dd91();
        if ((int)uVar3 == 0) {
          uVar3 = FUN_0096dd91();
          if ((int)uVar3 == 0) {
            uVar3 = FUN_0096dd91();
            if ((int)uVar3 == 0) {
              uVar3 = FUN_0096dd91();
              if ((int)uVar3 == 0) {
                uVar3 = FUN_0096dd91();
                if ((int)uVar3 == 0) {
                  uVar3 = FUN_0096dd91();
                  if ((int)uVar3 == 0) {
                    if ((param_2 == '\0') || (param_1[0x5e] == 0)) {
                      uVar4 = 0;
                    }
                    else {
                      FUN_0096ba6b(param_1 + 0x1e,param_1 + 0x10,param_1 + 2);
                      uVar4 = 2;
                    }
                    FUN_0096a17b(param_1 + 2,param_1 + 0x1e,uVar4);
                    *param_1 = unaff_EDI;
                    uVar3 = (uint64_t)param_1[0xba];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}

