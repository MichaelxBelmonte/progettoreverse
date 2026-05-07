// Function: FUN_0193d7c0
// Address: 0193d7c0
// Size: 916 bytes
// Class: Unknown


undefined8 * FUN_0193d7c0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  longlong **pplVar12;
  ulonglong uVar13;
  longlong *local_60;
  char local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RSI + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc);
  uVar13 = (ulonglong)uVar7;
  if (0 < (int)uVar7) {
    local_48 = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    local_50 = 0;
    uVar9 = 0;
    do {
      uVar7 = uVar7 - 1;
      plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar7 * 8);
      local_58 = '\0';
      local_60 = plVar1;
      uVar6 = FUN_008291b0();
      pplVar12 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar12 = &local_60;
        if ((char)uVar6 == '\0') {
          pplVar12 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = *pplVar12;
      cVar3 = (char)uVar9;
      if (plVar8 == local_48) {
        plVar2 = local_48;
        local_40 = uVar9;
        if ((cVar3 == '\0') && (plVar8 != (longlong *)0x0)) {
          plVar8 = local_48;
          if (*(char *)(pplVar12 + 1) != '\0') goto LAB_0193d8e5;
          local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          FUN_00d50b00();
          plVar2 = local_48;
        }
      }
      else if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        plVar2 = plVar8;
        if ((cVar3 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar3 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
LAB_0193d8e5:
        *(undefined1 *)(pplVar12 + 1) = 0;
        plVar2 = plVar8;
        local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      local_48 = plVar2;
      if ((local_58 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = local_48;
      uVar10 = local_50;
      if (local_48 == (longlong *)0x0) {
LAB_0193d9e0:
        uVar10 = uVar10 & 0xffffffff;
      }
      else {
        (**(code **)(*local_48 + 0x4d8))();
        cVar3 = FUN_00d054a0();
        if (cVar3 == '\0') goto LAB_0193d9e0;
        FUN_01956980();
        plVar2 = local_60;
        uVar11 = (undefined7)((ulonglong)plVar1 >> 8);
        cVar3 = (char)uVar10;
        plVar1 = local_60;
        if (local_60 == local_38) {
          if ((cVar3 == '\0') && (local_60 != (longlong *)0x0)) {
            uVar10 = CONCAT71(uVar11,1);
            plVar2 = local_38;
            if (local_58 != '\0') goto joined_r0x0193dad7;
            FUN_00d50b00();
LAB_0193da66:
            uVar10 = CONCAT71(uVar11,1);
            plVar2 = local_38;
          }
          else {
            uVar10 = uVar10 & 0xffffffff;
            plVar2 = local_38;
          }
joined_r0x0193daf7:
          local_38 = plVar2;
          plVar1 = local_60;
          if (local_58 != '\0') {
LAB_0193da6c:
            plVar1 = local_60;
            plVar2 = local_38;
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar1 = local_60;
              plVar2 = local_38;
            }
            goto joined_r0x0193daeb;
          }
joined_r0x0193dad7:
          local_60 = plVar2;
          if (local_60 == (longlong *)0x0) goto LAB_0193dad9;
LAB_0193da83:
          local_58 = '\0';
          local_38 = local_60;
          FUN_00d235a0();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar10 = CONCAT71(uVar11,1);
            if (cVar3 == '\0') goto joined_r0x0193daf7;
            if (local_38 != (longlong *)0x0) {
              FUN_00d50b20();
              local_38 = plVar2;
              goto LAB_0193da66;
            }
            local_38 = plVar2;
            plVar1 = local_60;
            if (local_58 == '\0') goto joined_r0x0193dad7;
            goto LAB_0193da6c;
          }
          uVar10 = CONCAT71(uVar11,1);
          if ((cVar3 == '\0') || (local_38 == (longlong *)0x0)) goto joined_r0x0193dad7;
          FUN_00d50b20();
          plVar1 = local_60;
joined_r0x0193daeb:
          local_60 = plVar2;
          if (local_60 != (longlong *)0x0) goto LAB_0193da83;
LAB_0193dad9:
          local_60 = plVar1;
          local_38 = (longlong *)0x0;
        }
      }
      if ((longlong)uVar13 < 2) goto LAB_0193db21;
      uVar13 = uVar13 - 1;
      lVar5 = *(longlong *)(unaff_RSI + 0x38);
      uVar9 = local_40;
      local_50 = uVar10;
    } while( true );
  }
  uVar10 = 0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  plVar8 = (longlong *)0x0;
LAB_0193db21:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar10 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


