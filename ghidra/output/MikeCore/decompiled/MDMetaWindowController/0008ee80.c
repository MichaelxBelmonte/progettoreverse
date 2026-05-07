// Function: FUN_0008ee80
// Address: 0008ee80
// Size: 1852 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MDEditorViewController"
//   "MUMultiTrackView"


/* WARNING: Removing unreachable block (ram,0x0008f4d4) */
/* WARNING: Removing unreachable block (ram,0x0008f4dd) */
/* WARNING: Removing unreachable block (ram,0x0008f1fa) */
/* WARNING: Removing unreachable block (ram,0x0008f203) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0008ee80(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  longlong **pplVar7;
  undefined8 *unaff_RSI;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *unaff_R14;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    FUN_01e561b0();
    plVar9 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      unaff_R14 = (undefined8 *)0x0;
      goto LAB_0008f474;
    }
    FUN_01e561b0();
    FUN_01d8b220();
    local_60 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) {
        local_60 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60 = local_48;
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000914a0();
    plVar9 = DAT_02802688;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar9 = DAT_02802688;
      if (cVar3 != '\0') {
        plVar9 = local_60;
      }
    }
    if (plVar9 == (longlong *)0x0) {
      if ((DAT_026fe4d0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_02726438 = FUN_0006d940();
        _DAT_02726420 = "MUMultiTrackView";
        _DAT_02726428 = 0x228;
        _DAT_02726430 = FUN_00082de0;
        _DAT_02726440 = 0;
        uRam0000000002726448 = 0;
        _DAT_02726450 = 0;
        _DAT_027264c8 = 0;
        uRam00000000027264d0 = 0;
        _DAT_027264d8 = 0;
        DAT_027264da = 1;
        _DAT_02726458 = 0;
        uRam0000000002726460 = 0;
        _DAT_02726468 = 0;
        uRam0000000002726470 = 0;
        _DAT_02726478 = 0;
        uRam0000000002726480 = 0;
        _DAT_02726488 = 0;
        uRam0000000002726490 = 0;
        _DAT_02726498 = 0;
        uRam00000000027264a0 = 0;
        _DAT_027264a8 = 0;
        uRam00000000027264b0 = 0;
        _DAT_027264b8 = 0;
        uRam00000000027264c0 = 0;
        DAT_027264e3 = 0;
        _DAT_027264db = 0;
        ___cxa_guard_release();
      }
      if (local_60 == (longlong *)0x0) {
LAB_0008f1b6:
        plVar9 = DAT_02802688;
      }
      else {
        (**(code **)(*local_60 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar9 = local_60;
        if (cVar3 == '\0') goto LAB_0008f1b6;
      }
      if (plVar9 != (longlong *)0x0) {
        local_58 = local_60;
        local_38[0] = '\0';
        unaff_RSI = &DAT_02802688;
        do {
          plVar9 = local_58;
          (**(code **)(*local_58 + 0x370))();
          plVar8 = local_48;
          if (local_48 == plVar9) {
            if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
              local_38[0] = '\x01';
              plVar8 = plVar9;
              goto LAB_0008f2c7;
            }
          }
          else {
            local_58 = local_48;
            if (local_40[0] == '\0') {
              if (local_38[0] == '\0') {
                pcVar6 = local_38;
              }
              else {
                FUN_00d50b20();
                pcVar6 = local_38;
              }
            }
            else {
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
              local_38[0] = '\x01';
LAB_0008f2c7:
              local_38[0] = '\x01';
              pcVar6 = local_40;
            }
            *pcVar6 = '\0';
            plVar9 = plVar8;
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((DAT_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_026e0ab8 = FUN_00015ff0();
            _DAT_026e0aa0 = "MDMetaWindowController";
            _DAT_026e0aa8 = 0x198;
            _DAT_026e0ab0 = FUN_0006dea0;
            _DAT_026e0ac0 = 0;
            uRam00000000026e0ac8 = 0;
            _DAT_026e0ad0 = 0;
            _DAT_026e0b48 = 0;
            uRam00000000026e0b50 = 0;
            _DAT_026e0b58 = 0;
            DAT_026e0b5a = 1;
            _DAT_026e0ad8 = 0;
            uRam00000000026e0ae0 = 0;
            _DAT_026e0ae8 = 0;
            uRam00000000026e0af0 = 0;
            _DAT_026e0af8 = 0;
            uRam00000000026e0b00 = 0;
            _DAT_026e0b08 = 0;
            uRam00000000026e0b10 = 0;
            _DAT_026e0b18 = 0;
            uRam00000000026e0b20 = 0;
            _DAT_026e0b28 = 0;
            uRam00000000026e0b30 = 0;
            _DAT_026e0b38 = 0;
            uRam00000000026e0b40 = 0;
            DAT_026e0b63 = 0;
            _DAT_026e0b5b = 0;
            ___cxa_guard_release();
          }
          pplVar7 = &DAT_02802688;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar7 = &local_58;
            if (cVar3 == '\0') {
              pplVar7 = &DAT_02802688;
            }
          }
          if (*pplVar7 != (longlong *)0x0) {
            if ((local_38[0] == '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            else if (local_58 == (longlong *)0x0) break;
            uVar10 = FUN_0063f230();
            if (local_40[0] == '\0') {
              if (local_48 != (longlong *)0x0) {
                uVar10 = FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  uVar10 = FUN_00d50b20();
                }
                goto LAB_0008f4ab;
              }
LAB_0008f4ee:
              bVar1 = true;
            }
            else {
              if (local_48 == (longlong *)0x0) goto LAB_0008f4ee;
LAB_0008f4ab:
              uVar5 = FUN_00248590(uVar10,1);
              unaff_RSI = (undefined8 *)(ulonglong)uVar5;
              FUN_00d50b20();
              bVar1 = false;
            }
            FUN_00d50b20();
            if (!bVar1) goto LAB_0008f210;
            break;
          }
        } while (local_58 != (longlong *)0x0);
      }
    }
    else {
      local_38[0] = '\0';
      unaff_RSI = &DAT_02802688;
      local_58 = local_60;
      do {
        plVar9 = local_58;
        uVar10 = (**(code **)(*local_58 + 0x370))();
        plVar8 = local_48;
        if (local_48 == plVar9) {
          if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            plVar8 = plVar9;
            goto LAB_0008efc7;
          }
        }
        else {
          local_58 = local_48;
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar6 = local_38;
            }
            else {
              uVar10 = FUN_00d50b20();
              pcVar6 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              uVar10 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
LAB_0008efc7:
            local_38[0] = '\x01';
            pcVar6 = local_40;
          }
          *pcVar6 = '\0';
          plVar9 = plVar8;
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((DAT_026f7020 == '\0') &&
           (iVar4 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar4 != 0)) {
          _DAT_0270aa58 = FUN_00015ff0();
          _DAT_0270aa40 = "MDEditorViewController";
          _DAT_0270aa48 = 0x1e8;
          _DAT_0270aa50 = FUN_00074eb0;
          _DAT_0270aa60 = 0;
          uRam000000000270aa68 = 0;
          _DAT_0270aa70 = 0;
          _DAT_0270aae8 = 0;
          uRam000000000270aaf0 = 0;
          _DAT_0270aaf8 = 0;
          DAT_0270aafa = 1;
          _DAT_0270aa78 = 0;
          uRam000000000270aa80 = 0;
          _DAT_0270aa88 = 0;
          uRam000000000270aa90 = 0;
          _DAT_0270aa98 = 0;
          uRam000000000270aaa0 = 0;
          _DAT_0270aaa8 = 0;
          uRam000000000270aab0 = 0;
          _DAT_0270aab8 = 0;
          uRam000000000270aac0 = 0;
          _DAT_0270aac8 = 0;
          uRam000000000270aad0 = 0;
          _DAT_0270aad8 = 0;
          uRam000000000270aae0 = 0;
          DAT_0270ab03 = 0;
          _DAT_0270aafb = 0;
          uVar10 = ___cxa_guard_release();
        }
        pplVar7 = &DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_58;
          uVar10 = extraout_XMM0_Da;
          if (cVar3 == '\0') {
            pplVar7 = &DAT_02802688;
          }
        }
        if (*pplVar7 != (longlong *)0x0) {
          if ((local_38[0] == '\0') && (local_58 != (longlong *)0x0)) {
            uVar10 = FUN_00d50b00();
          }
          else if (local_58 == (longlong *)0x0) break;
          uVar5 = FUN_00248590(uVar10,1);
          unaff_RSI = (undefined8 *)(ulonglong)uVar5;
          FUN_00d50b20();
          goto LAB_0008f210;
        }
      } while (local_58 != (longlong *)0x0);
    }
    bVar2 = true;
    bVar1 = true;
    unaff_R14 = unaff_RSI;
    goto joined_r0x0008f219;
  }
  goto LAB_0008f471;
LAB_0008f210:
  bVar2 = false;
  bVar1 = false;
  unaff_R14 = unaff_RSI;
joined_r0x0008f219:
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) goto LAB_0008f474;
LAB_0008f471:
  unaff_R14 = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
LAB_0008f474:
  return (ulonglong)unaff_R14 & 0xffffff01;
}


