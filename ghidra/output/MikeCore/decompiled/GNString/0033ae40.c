// Function: FUN_0033ae40
// Address: 0033ae40
// Size: 1200 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0033b2af) */
/* WARNING: Removing unreachable block (ram,0x0033b2b8) */

undefined8 FUN_0033ae40(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = FUN_01caea40();
  iVar7 = *(int *)((longlong)unaff_RDI + 0x19c) + 1;
  *(int *)((longlong)unaff_RDI + 0x19c) = iVar7;
  FUN_000b6980();
  iVar8 = *(int *)((longlong)local_68 + 0xc);
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
  if (iVar7 == iVar8) {
    *(undefined4 *)(unaff_RDI + 0x33) = 0xffffffff;
  }
  else if (iVar4 == (int)unaff_RDI[0x33]) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    plVar1 = local_68;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0033af05;
      }
    }
    else if (local_68 != (longlong *)0x0) {
LAB_0033af05:
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_58 = plVar1;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      do {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar8 = -local_50._4_4_;
          }
          else {
            iVar8 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar8 = 0;
          }
          local_50 = CONCAT44(iVar8,(int)local_50);
        }
        lVar6 = (longlong)(int)local_50;
        iVar8 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar8);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar8) goto LAB_0033b0cf;
        plVar1 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
        local_68 = plVar1;
        local_40 = plVar1;
        FUN_000f5df0();
        pplVar9 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar9 = &local_40;
          if (cVar3 == '\0') {
            pplVar9 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar9 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0xa18))();
          plVar1 = local_40;
          lVar6 = DAT_02702980;
          if (DAT_02702980 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar1 + 0x50))();
          if (cVar3 == '\0') {
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            iVar8 = (**(code **)(*local_68 + 0xa88))();
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar4 != iVar8) goto LAB_0033b0bb;
          }
        }
      } while( true );
    }
  }
  goto LAB_0033b0e4;
LAB_0033b0bb:
  uVar5 = (**(code **)(*local_68 + 0xa88))();
  *(undefined4 *)(unaff_RDI + 0x33) = uVar5;
LAB_0033b0cf:
  FUN_0033c540();
  FUN_00d50b20();
LAB_0033b0e4:
  FUN_01caeb00();
  FUN_01e4ec80();
  lVar6 = DAT_02702930;
  if (DAT_02702930 != 0) {
    FUN_00d50b00();
  }
  pplVar9 = &local_68;
  FUN_000175c0();
  plVar1 = local_68;
  FUN_000f5df0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0033b16d;
  }
  pplVar9 = (longlong **)&DAT_02802688;
LAB_0033b16d:
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01e4ec80();
    FUN_00d46300();
    plVar2 = DAT_02702960;
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
      plVar2 = DAT_02702960;
    }
    DAT_02702960 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_60 = '\0';
    local_68 = plVar2;
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_0033a220();
  FUN_003372c0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


