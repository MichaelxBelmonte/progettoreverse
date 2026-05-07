// Function: FUN_00e0c660
// Address: 00e0c660
// Size: 1039 bytes
// Class: GNDistinction


/* WARNING: Removing unreachable block (ram,0x00e0c964) */
/* WARNING: Removing unreachable block (ram,0x00e0c970) */

ulonglong FUN_00e0c660(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a0;
  char local_98 [8];
  longlong local_90;
  int local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  FUN_00c9fe20();
  lVar1 = local_a0;
  pcVar4 = &local_50;
  if (local_98[0] != '\0') {
    pcVar4 = local_98;
  }
  local_50 = local_98[0];
  *pcVar4 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar5 = local_60;
  local_78 = '\x01';
  local_80 = lVar1;
  FUN_0009d720();
  local_58 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    local_98[0] = '\0';
    local_a0 = 0;
    local_90 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
    local_88 = 0;
    if (0 < *(int *)(local_90 + 0xc)) {
      do {
        local_a0 = *(longlong *)(*(longlong *)(local_90 + 0x10) + (longlong)local_88 * 8);
        FUN_00e0baf0((longlong)local_88,&local_a0);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00e0c800;
          }
LAB_00e0ca66:
          if ((local_98[0] != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          uVar6 = 0;
          if (local_58 == 0) goto LAB_00e0ca11;
          goto LAB_00e0ca0c;
        }
        if (local_40 == 0) goto LAB_00e0ca66;
LAB_00e0c800:
        FUN_00e0baf0();
        local_68 = 0;
        lVar1 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        lVar5 = local_60;
        local_68 = '\x01';
        local_70 = lVar1;
        FUN_00e0cdb0();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e0cdb0();
        lVar2 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_38 = '\0';
        local_40 = lVar2;
        cVar3 = FUN_00d7aa00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_40 = local_a0;
          local_38 = '\0';
          FUN_00d23f50();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (cVar3 == '\0') goto LAB_00e0ca66;
        local_88 = local_88 + 1;
      } while (local_88 < *(int *)(local_90 + 0xc));
    }
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),*(int *)(local_58 + 0xc) == 0);
LAB_00e0ca0c:
  FUN_00d50b20();
LAB_00e0ca11:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}


