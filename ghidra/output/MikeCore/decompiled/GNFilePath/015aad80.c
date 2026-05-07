// Function: FUN_015aad80
// Address: 015aad80
// Size: 1545 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_015aad80(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  local_b0 = *param_2;
  local_a8 = '\0';
  pplVar4 = &local_78;
  FUN_007f4af0(param_1,&local_b0);
  plVar5 = local_78;
  if ((DAT_026fde10 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d1818 = FUN_00d4fe50();
    DAT_026d1800 = "GNFilePath";
    _DAT_026d1808 = 0x40;
    _DAT_026d1810 = FUN_00041050;
    _DAT_026d1820 = 0;
    uRam00000000026d1828 = 0;
    _DAT_026d1830 = 0;
    uRam00000000026d1838 = 0;
    _DAT_026d1840 = 0;
    uRam00000000026d1848 = 0;
    _DAT_026d1850 = 0;
    uRam00000000026d1858 = 0;
    _DAT_026d1860 = 0;
    uRam00000000026d1868 = 0;
    _DAT_026d1870 = 0;
    uRam00000000026d1878 = 0;
    _DAT_026d1880 = 0;
    uRam00000000026d1888 = 0;
    _DAT_026d1890 = 0;
    uRam00000000026d1898 = 0;
    _DAT_026d18a0 = 0;
    uRam00000000026d18a8 = 0;
    _DAT_026d18b0 = 0;
    uRam00000000026d18b8 = 0;
    _DAT_026d18c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_015aae03;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_015aae03:
  plVar5 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      (**(code **)(*(longlong *)*param_2 + 0x388))();
      plVar7 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0x3f0))();
      local_a0 = plVar7;
      local_98 = '\0';
      (**(code **)(*local_48 + 0x400))(uVar8,&local_a0);
      if (local_78 != (longlong *)0x0) {
        plVar5 = local_78;
        if (local_70 == '\0') {
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_38 = plVar5;
      cVar2 = (**(code **)(*plVar5 + 0x398))();
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0x3f0))();
        (**(code **)(*local_48 + 1000))();
        plVar5 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 != (longlong *)0x0) {
          local_50 = plVar7;
          local_70 = '\0';
          local_78 = (longlong *)0x0;
          local_68 = plVar5;
          local_58 = 0;
          local_60 = 0;
          if (0 < *(int *)((longlong)plVar5 + 0xc)) {
            lVar6 = 0;
            do {
              plVar7 = *(longlong **)(plVar5[2] + lVar6 * 8);
              local_78 = plVar7;
              cVar2 = (**(code **)(*plVar7 + 0x3a0))();
              if (cVar2 == '\0') {
                cVar2 = (**(code **)(*plVar7 + 0x4a8))();
                if (cVar2 != '\0') {
                  (**(code **)(*plVar7 + 0x4b0))();
                  plVar7 = local_48;
                  if (local_48 == (longlong *)0x0) {
LAB_015ab12a:
                    bVar1 = false;
                    plVar7 = (longlong *)0x0;
                  }
                  else {
                    bVar1 = true;
                    if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
                       (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  goto LAB_015ab130;
                }
                cVar2 = (**(code **)(*plVar7 + 0x4c0))();
                if (cVar2 != '\0') {
                  (**(code **)(*plVar7 + 0x4c8))();
                  plVar7 = local_48;
                  if (local_48 == (longlong *)0x0) goto LAB_015ab12a;
                  bVar1 = true;
                  if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
                     (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_015ab130;
                }
              }
              else {
                FUN_00d50b00();
                bVar1 = true;
LAB_015ab130:
                if (plVar7 != (longlong *)0x0) {
                  cVar2 = (**(code **)(*plVar7 + 0x3a0))();
                  if (cVar2 != '\0') {
                    local_90 = local_50;
                    local_88 = '\0';
                    (**(code **)(*plVar7 + 0x400))(extraout_XMM0_Da,&local_90);
                    plVar7 = local_38;
                    if (local_48 == local_38) {
joined_r0x015ab224:
                      local_38 = plVar7;
                      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      plVar7 = local_48;
                      if (local_40 == '\0') {
                        if (local_48 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        if (local_38 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        goto joined_r0x015ab224;
                      }
                      if (local_38 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      local_40 = '\0';
                    }
                    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_38 = plVar7;
                    cVar2 = (**(code **)(*plVar7 + 0x398))();
                    if (cVar2 != '\0') {
                      *unaff_RDI = (longlong)local_38;
                      *(undefined1 *)(unaff_RDI + 1) = 1;
                      if (bVar1) {
                        FUN_00d50b20();
                      }
                      FUN_00115910();
                      bVar1 = true;
                      FUN_00d50b20();
                      plVar7 = local_50;
                      goto LAB_015ab258;
                    }
                  }
                  if (bVar1) {
                    FUN_00d50b20();
                  }
                }
              }
              lVar6 = lVar6 + 1;
              local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
            } while ((int)lVar6 < *(int *)((longlong)plVar5 + 0xc));
          }
          FUN_00115910();
          FUN_00d50b20();
          plVar7 = local_50;
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        bVar1 = false;
      }
      else {
        *unaff_RDI = (longlong)plVar5;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        bVar1 = true;
      }
LAB_015ab258:
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      plVar5 = local_38;
      if (bVar1) {
        return unaff_RDI;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *unaff_RDI = (longlong)plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


