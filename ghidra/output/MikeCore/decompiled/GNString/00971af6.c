// Function: FUN_00971af6
// Address: 00971af6
// Size: 772 bytes
// Class: GNString


int FUN_00971af6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  undefined1 local_280 [200];
  int local_1b8 [64];
  undefined1 local_b8 [56];
  undefined1 local_80 [56];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  iVar4 = 99;
  if ((((unaff_RDI != 0) && (unaff_RSI != 0)) && (param_2 != 0)) &&
     ((param_1 != 0 && (iVar4 = *(int *)(unaff_RDI + 0x2e8), iVar4 == 0)))) {
    FUN_0096dfbe();
    FUN_0096dfbe();
    FUN_0096dfbe();
    FUN_00971584();
    FUN_00971584();
    iVar3 = FUN_0096e05d();
    iVar4 = 0x6a;
    if (iVar3 != 0) {
      local_48 = param_1 + 0x38;
      iVar3 = FUN_0096e05d();
      if (iVar3 != 0) {
        local_40 = unaff_RDI + 0xb0;
        iVar3 = FUN_00969df5();
        if (((iVar3 < 0) && (iVar3 = FUN_00969df5(), iVar3 < 0)) &&
           (iVar4 = *(int *)(unaff_RDI + 0x2e8), iVar4 == 0)) {
          local_38 = unaff_RDI + 0x180;
          cVar2 = FUN_0096a284(0,unaff_RSI + 0x38,local_1b8);
          lVar1 = local_40;
          iVar4 = 0x69;
          if (cVar2 != '\0') {
            FUN_0096d3b2(local_80,local_40,local_80,local_80);
            FUN_00969150(local_80,local_80,lVar1,lVar1);
            FUN_00969150(local_80,local_80,lVar1,lVar1);
            if (*(int *)(unaff_RDI + 0x178) == 0) {
              if (*(int *)(unaff_RDI + 0x2e8) != 0) {
                return *(int *)(unaff_RDI + 0x2e8);
              }
              cVar2 = FUN_0096a284(0,unaff_RDI + 0x120,local_280);
              if (cVar2 == '\0') {
                return 0x69;
              }
              FUN_0096b5d7(local_b8,local_1b8,local_280,local_280);
            }
            else {
              FUN_0096ba8a(local_b8,local_b8,local_80);
              if (*(int *)(unaff_RDI + 0x2e8) != 0) {
                return *(int *)(unaff_RDI + 0x2e8);
              }
              cVar2 = FUN_0096a284(0,local_80,local_280);
              if (cVar2 == '\0') {
                return 0x69;
              }
              if (local_1b8[0] != 2) {
                FUN_0096b317(local_1b8,local_1b8);
                if (*(int *)(unaff_RDI + 0x2e8) != 0) {
                  return *(int *)(unaff_RDI + 0x2e8);
                }
              }
              FUN_0096acb3();
            }
            FUN_0096a4c9(local_80,local_80);
            iVar4 = *(int *)(unaff_RDI + 0x2e8);
            if (iVar4 == 0) {
              FUN_00968a1c(local_40,local_40);
              iVar3 = FUN_00969df5();
              iVar4 = 0x6a;
              if (iVar3 == 0) {
                iVar4 = *(int *)(unaff_RDI + 0x2e8);
              }
            }
          }
        }
      }
    }
  }
  return iVar4;
}


