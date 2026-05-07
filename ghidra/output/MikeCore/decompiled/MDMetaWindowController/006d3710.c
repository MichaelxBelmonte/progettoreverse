// Function: FUN_006d3710
// Address: 006d3710
// Size: 819 bytes
// Class: MDMetaWindowController


void FUN_006d3710(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_006cb500();
  if ((local_80[0] == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  local_50 = puVar3;
  if ((local_88 == 0) || (*(int *)(local_88 + 0xc) == 0)) {
LAB_006d38c7:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_40 = local_88;
  }
  else {
    FUN_00d23310();
    uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),local_80[0]);
    pcVar8 = local_38;
    if (local_80[0] != '\0') {
      pcVar8 = local_80;
    }
    local_38[0] = local_80[0];
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8b60();
    pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e61a0();
    lVar10 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar10 == 0) goto LAB_006d38c7;
    local_40 = local_88;
    local_80[0] = '\0';
    local_78 = lVar10;
    local_68 = 0;
    local_70 = 0;
    if (*(int *)(lVar10 + 0xc) < 1) {
      lVar9 = 0;
      local_48 = 0;
    }
    else {
      lVar11 = 0;
      local_48 = 0;
      lVar9 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar11 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_012e6040();
        if (iVar2 == 3) {
          if (lVar9 != 0) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            *unaff_RDI = 0;
            FUN_000be170();
            FUN_00d50b20();
            puVar3 = local_50;
            lVar10 = local_40;
            if ((char)local_48 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_006d38de;
          }
          if (lVar1 == 0) {
            lVar9 = 0;
          }
          else {
            uVar5 = FUN_00d50b00();
            local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            lVar9 = lVar1;
          }
        }
        lVar11 = lVar11 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar11);
      } while ((int)lVar11 < *(int *)(lVar10 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_48 != '\0') goto LAB_006d38d3;
    if (lVar9 != 0) {
      FUN_00d50b00();
      goto LAB_006d38d3;
    }
  }
  lVar9 = 0;
LAB_006d38d3:
  *unaff_RDI = lVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  puVar3 = local_50;
  lVar10 = local_40;
LAB_006d38de:
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  return;
}


