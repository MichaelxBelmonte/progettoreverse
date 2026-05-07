// Function: FUN_002aeac0
// Address: 002aeac0
// Size: 845 bytes
// Class: MDMetaWindowController


void FUN_002aeac0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  longlong unaff_RDI;
  int iVar5;
  longlong lVar6;
  longlong local_c0;
  char local_b8;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x50) != 0) {
    iVar5 = *(int *)(unaff_RDI + 0x58);
    iVar3 = FUN_01d5b230();
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar1 != 0) {
      local_b8 = '\0';
      local_c0 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar6 = 0;
        do {
          local_c0 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
          if ((int)lVar6 + iVar5 < iVar3) {
            FUN_01d5b240();
            local_38[0] = local_40[0];
            pcVar4 = local_40;
            if (local_40[0] == '\0') {
              pcVar4 = local_38;
            }
            *pcVar4 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            FUN_007585f0();
            if (local_40[0] == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40[0] = '\0';
            }
            FUN_01d64eb0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_007585f0();
            lVar2 = DAT_026fbe38;
            if (local_40[0] == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
                lVar2 = DAT_026fbe38;
              }
            }
            else {
              local_40[0] = '\0';
            }
            DAT_026fbe38 = lVar2;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_01d5d9b0();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
        iVar5 = (int)lVar6 + iVar5;
      }
      FUN_002b3090();
    }
    for (; iVar5 < iVar3; iVar5 = iVar5 + 2) {
      FUN_01d5b240();
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      FUN_01d5dde0();
      if (local_c0 != 0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


