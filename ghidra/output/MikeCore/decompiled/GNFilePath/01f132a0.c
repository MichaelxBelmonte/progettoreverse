// Function: FUN_01f132a0
// Address: 01f132a0
// Size: 911 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "addObject:"
//   "fileURLWithPath:isDirectory:"


/* WARNING: Removing unreachable block (ram,0x01f133f9) */
/* WARNING: Removing unreachable block (ram,0x01f13406) */
/* WARNING: Removing unreachable block (ram,0x01f135b8) */
/* WARNING: Removing unreachable block (ram,0x01f135c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f132a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong **pplVar10;
  int iVar11;
  longlong *unaff_RSI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_58;
  undefined1 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  int local_38;
  
  if (*unaff_RSI != 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    if ((undefined8 *)*unaff_RSI != (undefined8 *)0x0) {
      local_50 = 0;
      local_58 = (longlong *)0x0;
      local_48 = (undefined8 *)*unaff_RSI;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar11 = -local_40._4_4_;
          }
          else {
            iVar11 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar11);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
        lVar5 = (longlong)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)((longlong)local_48 + 0xc) <= iVar11) break;
        plVar1 = *(longlong **)(local_48[2] + 8 + lVar5 * 8);
        local_58 = plVar1;
        if ((DAT_026fde10 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
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
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_58;
          if (cVar2 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar10 != (longlong *)0x0) {
          FUN_00d21140();
        }
      }
      FUN_00083b20();
    }
    if (*(int *)((longlong)puVar4 + 0xc) != 0) {
      _objc_alloc();
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
      uVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
      local_50 = 0;
      local_58 = (longlong *)0x0;
      local_38 = 0;
      local_40 = 0;
      local_48 = puVar4;
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(puVar4[2] + lVar5 * 8);
          local_58 = plVar1;
          uVar8 = FUN_00e1d020();
          uVar3 = (**(code **)(*plVar1 + 0x3a0))();
          lVar9 = (*(code *)PTR__objc_msgSend_024a9998)(uVar3,uVar8,param_3,param_4,uVar6);
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,lVar9);
          }
          lVar5 = lVar5 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)((longlong)puVar4 + 0xc));
      }
      FUN_00115910();
      lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar5 != 0) {
        (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_00,uVar7);
      }
      (*(code *)PTR__objc_release_024a99a0)();
    }
    FUN_00d50b20();
  }
  return;
}


