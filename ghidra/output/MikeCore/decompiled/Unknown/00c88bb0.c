// Function: FUN_00c88bb0
// Address: 00c88bb0
// Size: 542 bytes
// Class: Unknown


void FUN_00c88bb0(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong local_68;
  char local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  lVar2 = local_68;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = *(longlong *)(unaff_RDI + 0x88);
  *(undefined8 **)(unaff_RDI + 0x88) = puVar4;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00c81c90();
  if (local_60[0] == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_00c88c36;
    }
  }
  else if (local_68 != 0) {
LAB_00c88c36:
    local_60[0] = '\0';
    local_68 = 0;
    local_48 = 0;
    local_50 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar6 = 0;
      do {
        local_68 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar6 * 8);
        FUN_00d77be0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00c88cf0;
          }
        }
        else if (local_40 != 0) {
LAB_00c88cf0:
          cVar3 = FUN_00d77e10();
          if (cVar3 != '\0') {
            local_38 = '\0';
            local_40 = local_68;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
      } while ((int)lVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_00559a70();
    FUN_00d50b20();
  }
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x88) + 0xc);
  if (iVar1 == 0) {
LAB_00c88dc8:
    *(undefined1 *)(unaff_RDI + 0x80) = 0;
  }
  else {
    if (iVar1 < 2) {
      FUN_00d23340();
      plVar5 = &local_40;
      if (local_60[0] != '\0') {
        plVar5 = (longlong *)local_60;
      }
      local_40 = CONCAT71(local_40._1_7_,local_60[0]);
      *(char *)plVar5 = '\0';
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      cVar3 = FUN_00d77de0();
      if (((char)local_40 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') goto LAB_00c88dc8;
    }
    *(undefined1 *)(unaff_RDI + 0x80) = 1;
  }
  return;
}


