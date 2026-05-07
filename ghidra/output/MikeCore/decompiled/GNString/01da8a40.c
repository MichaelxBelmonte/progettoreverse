// Function: FUN_01da8a40
// Address: 01da8a40
// Size: 1563 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01da8ee6) */
/* WARNING: Removing unreachable block (ram,0x01da8ef6) */

void FUN_01da8a40(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  longlong unaff_RDI;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong local_68;
  longlong local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar7 = local_48;
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    FUN_00c9fe20();
    local_38[0] = local_40[0];
    pcVar10 = local_40;
    if (local_40[0] == '\0') {
      pcVar10 = local_38;
    }
    *pcVar10 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      lVar14 = 0;
      bVar6 = true;
    }
    else {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      bVar6 = false;
      lVar14 = local_48;
    }
    FUN_00ca1380();
    pcVar10 = local_40;
    if (local_40[0] == '\0') {
      pcVar10 = local_38;
    }
    local_38[0] = local_40[0];
    *pcVar10 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      lVar11 = 0;
      bVar5 = true;
    }
    else {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      bVar5 = false;
      lVar11 = local_48;
    }
    FUN_01d5e2b0();
    if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    iVar12 = 0;
    if (*(int *)(local_48 + 0xc) < 1) {
      bVar3 = false;
      local_68 = 0;
      bVar4 = false;
      local_50 = 0;
      bVar1 = false;
      lVar15 = 0;
    }
    else {
      bVar1 = false;
      local_50 = 0;
      bVar4 = false;
      local_68 = 0;
      bVar3 = false;
      lVar13 = 0;
      do {
        FUN_01d5b240();
        if (local_48 == lVar13) {
          lVar15 = lVar13;
          bVar2 = bVar1;
          if ((bVar1) || (local_48 == 0)) goto joined_r0x01da8c79;
          bVar2 = true;
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            goto LAB_01da8c65;
          }
        }
        else {
          lVar15 = local_48;
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (lVar13 != 0)) {
              FUN_00d50b20();
              lVar13 = local_48;
LAB_01da8c65:
              lVar15 = lVar13;
              bVar2 = true;
            }
joined_r0x01da8c79:
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (lVar13 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar1 = bVar2;
        cVar8 = FUN_01d64c70();
        if (cVar8 == '\0') {
          FUN_01d65460();
          if (local_48 == local_50) {
            lVar13 = local_50;
            bVar2 = bVar3;
            if ((!bVar3) && (local_48 != 0)) {
              if (local_40[0] != '\0') goto joined_r0x01da8db6;
              FUN_00d50b00();
              bVar2 = true;
            }
LAB_01da8e00:
            local_50 = lVar13;
            bVar3 = bVar2;
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_40[0] == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              lVar13 = local_48;
              if ((bVar3) && (local_50 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01da8e00;
            }
            lVar13 = local_48;
            if ((bVar3) && (local_50 != 0)) {
              FUN_00d50b20();
            }
joined_r0x01da8db6:
            local_50 = lVar13;
            bVar3 = true;
          }
          if (local_50 == 0) {
            local_50 = 0;
          }
          else {
            local_40[0] = '\0';
            iVar9 = FUN_00d237a0();
            if ((local_40[0] != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            local_48 = local_50;
            if (iVar9 == -1) {
              FUN_01d65190();
            }
            else {
              lVar13 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (longlong)iVar9 * 8);
              if (local_68 == lVar13) {
                if ((!bVar4) && (local_68 != 0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_68 != 0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_68 = lVar13;
                }
                else {
                  bVar4 = true;
                  local_68 = lVar13;
                }
              }
              FUN_01d42800();
              if (local_40[0] == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              FUN_01d65190();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        else {
          FUN_01d64cb0();
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          FUN_01da8a40();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar12 = iVar12 + 1;
        lVar13 = lVar15;
      } while (iVar12 < *(int *)(lVar7 + 0xc));
    }
    cVar8 = FUN_01d5b410();
    if (cVar8 != '\0') {
      FUN_01d5d570();
    }
    if ((bVar4) && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (lVar15 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (!bVar5 && lVar11 != 0) {
      FUN_00d50b20();
    }
    if (!bVar6 && lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


