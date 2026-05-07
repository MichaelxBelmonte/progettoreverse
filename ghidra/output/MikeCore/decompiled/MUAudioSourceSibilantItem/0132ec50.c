// Function: FUN_0132ec50
// Address: 0132ec50
// Size: 1034 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0132ee00) */
/* WARNING: Removing unreachable block (ram,0x0132ee09) */

void FUN_0132ec50(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong unaff_RDI;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_e0 [16];
  undefined1 local_d0 [8];
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  undefined1 local_31;
  
  local_31 = 0;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_90 = *(longlong *)(unaff_RDI + 0x40);
  if (local_90 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_0147ce20();
  lVar1 = local_b8;
  if (local_b0 == '\0') {
    if (((local_b8 != 0) && (FUN_00d50b00(), local_b0 != '\0')) && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_b0 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d242c0();
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 0x1ab) = 1;
  }
  else {
    local_b0 = '\0';
    local_b8 = 0;
    local_a8 = lVar1;
    local_98 = 0;
    local_a0 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar8 = 0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar8 * 8);
        uVar4 = uVar8;
        local_b8 = lVar9;
        pvVar3 = _pthread_getspecific(uVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        local_40 = local_60;
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = 0;
        FUN_00d50b00();
        local_48 = '\x01';
        local_78 = '\0';
        local_80 = puVar2;
        local_50 = unaff_RDI;
        FUN_014c03f0(&local_50,local_d0,&local_80);
        if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = *(int *)(puVar2 + 3);
        if (0xe < iVar5 + 7U) {
          if (lVar9 != 0) {
            FUN_00d50b00();
            iVar5 = *(int *)(puVar2 + 3);
          }
          if (iVar5 < 8) {
            if (lVar9 == 0) goto LAB_0132efed;
          }
          else {
            lVar7 = 0;
            do {
              local_c0 = 0;
              local_c8 = lVar9;
              FUN_0135f200(*(undefined8 *)(puVar2[2] + lVar7 * 8),&local_c8,local_e0,&local_31);
              if (local_60 == lVar9) {
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
                bVar10 = lVar9 != 0;
                lVar9 = local_60;
                if (bVar10) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar10 = lVar9 != 0;
                lVar9 = local_60;
                if (bVar10) {
                  FUN_00d50b20();
                }
              }
              if (lVar9 == 0) goto LAB_0132efed;
              lVar7 = lVar7 + 1;
              iVar5 = *(int *)(puVar2 + 3);
              iVar6 = iVar5 + 7;
              if (-1 < iVar5) {
                iVar6 = iVar5;
              }
            } while (lVar7 < iVar6 >> 3);
          }
          FUN_00d50b20();
        }
LAB_0132efed:
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar8 = uVar8 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,uVar8);
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_001150f0();
    *(undefined1 *)(unaff_RDI + 0x1ab) = 1;
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


