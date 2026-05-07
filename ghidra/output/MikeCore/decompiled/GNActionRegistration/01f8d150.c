// Function: FUN_01f8d150
// Address: 01f8d150
// Size: 1098 bytes
// Class: GNActionRegistration


/* WARNING: Removing unreachable block (ram,0x01f8d1fb) */
/* WARNING: Removing unreachable block (ram,0x01f8d207) */

ulonglong FUN_01f8d150(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 unaff_R13;
  undefined7 uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_01f8cb70();
  plVar6 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d68580();
  plVar1 = local_40;
  uVar9 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f8d1ab;
    }
    if (plVar6 == (longlong *)0x0) {
      uVar7 = CONCAT71(uVar9,1);
      goto LAB_01f8d580;
    }
LAB_01f8d1b4:
    local_60 = plVar6;
    FUN_01caf440();
    FUN_00d99300();
    uVar3 = FUN_00d90eb0();
    uVar7 = (ulonglong)uVar3;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      uVar8 = 0;
      uVar11 = uVar7;
      goto LAB_01f8d28f;
    }
  }
  else {
LAB_01f8d1ab:
    if (plVar6 != (longlong *)0x0) goto LAB_01f8d1b4;
    uVar7 = CONCAT71(uVar9,1);
    if (plVar1 == (longlong *)0x0) goto LAB_01f8d580;
    local_60 = plVar6;
    uVar11 = 0;
    uVar8 = uVar7;
LAB_01f8d28f:
    FUN_01da4890();
    FUN_01caf470();
    local_80 = 0;
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_a8;
    FUN_01da5370(param_1,&local_88);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      cVar10 = '\0';
    }
    else {
      iVar4 = FUN_01d3b590();
      uVar3 = FUN_01d3b590();
      uVar5 = FUN_01d3b590();
      bVar12 = (uVar5 & ~uVar3) == 0;
      FUN_01d3b5a0();
      cVar10 = bVar12 || iVar4 == 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f8d438;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_01f8d438:
        FUN_01d3b5a0();
        local_68 = local_40;
        plVar6 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            plVar6 = local_68;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01f8d452;
          }
          cVar10 = '\0';
        }
        else {
LAB_01f8d452:
          if ((plVar6 == (longlong *)0x0) || (!bVar12 && iVar4 != 0)) {
            cVar10 = '\0';
            cVar2 = '\0';
            if (local_68 == (longlong *)0x0) goto LAB_01f8d546;
          }
          else {
            FUN_00d99300();
            plVar6 = local_40;
            FUN_00d99300();
            local_78 = local_58;
            local_70 = 0;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_70 = '\x01';
            cVar2 = (**(code **)(*plVar6 + 0x50))();
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          cVar10 = cVar2;
          FUN_00d50b20();
        }
LAB_01f8d546:
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar7 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 | cVar10 != '\0');
    if ((char)uVar8 != '\0') goto LAB_01f8d580;
  }
  FUN_00d50b20();
LAB_01f8d580:
  return uVar7 & 0xffffffff;
}


