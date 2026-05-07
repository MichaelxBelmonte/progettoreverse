// Function: FUN_003bef50
// Address: 003bef50
// Size: 786 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_003bef50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  int iVar5;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_90;
  char local_88;
  longlong in_stack_ffffffffffffff88;
  undefined8 uVar7;
  char in_stack_ffffffffffffff90;
  undefined1 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *local_40;
  char local_38;
  
  FUN_003c0750();
  if ((in_stack_ffffffffffffff90 == '\0') && (in_stack_ffffffffffffff88 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  uVar6 = (*DAT_02572370)();
  if (in_stack_ffffffffffffff88 == 0) {
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    uVar10 = 0xffffffff;
    iVar11 = 0;
    iVar5 = 0;
    lVar12 = in_stack_ffffffffffffff88;
    while( true ) {
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        else {
          uVar10 = (ulonglong)(uint)((int)uVar10 - iVar5);
          FUN_00d23690(uVar6,iVar5,param_3,param_4,uVar7,uVar8,in_stack_ffffffffffffff88,uVar10,
                       iVar11,puVar3,lVar12);
          iVar11 = iVar11 + iVar5;
          iVar5 = 0;
        }
        uVar10 = CONCAT44(iVar5,(int)uVar10);
      }
      iVar9 = (int)uVar10;
      iVar5 = iVar9 + 1;
      uVar10 = CONCAT44((int)(uVar10 >> 0x20),iVar5);
      if (*(int *)(in_stack_ffffffffffffff88 + 0xc) <= iVar5) break;
      uVar7 = *(undefined8 *)
               (*(longlong *)(in_stack_ffffffffffffff88 + 0x10) + 8 + (longlong)iVar9 * 8);
      uVar6 = FUN_01bc1260();
      plVar1 = local_40;
      if (DAT_026ffff0 == '\0') {
        iVar5 = ___cxa_guard_acquire();
        uVar6 = extraout_XMM0_Da_00;
        if (iVar5 != 0) {
          _DAT_026e35e0 = FUN_00138ba0();
          _DAT_026e35c8 = "MDAudioTrackHeaderViewController";
          _DAT_026e35d0 = 0xb0;
          _DAT_026e35d8 = FUN_00138b40;
          _DAT_026e35e8 = 0;
          uRam00000000026e35f0 = 0;
          _DAT_026e35f8 = 0;
          _DAT_026e3670 = 0;
          uRam00000000026e3678 = 0;
          _DAT_026e3680 = 0;
          DAT_026e3682 = 1;
          _DAT_026e3600 = 0;
          uRam00000000026e3608 = 0;
          _DAT_026e3610 = 0;
          uRam00000000026e3618 = 0;
          _DAT_026e3620 = 0;
          uRam00000000026e3628 = 0;
          _DAT_026e3630 = 0;
          uRam00000000026e3638 = 0;
          _DAT_026e3640 = 0;
          uRam00000000026e3648 = 0;
          _DAT_026e3650 = 0;
          uRam00000000026e3658 = 0;
          _DAT_026e3660 = 0;
          uRam00000000026e3668 = 0;
          DAT_026e368b = 0;
          _DAT_026e3683 = 0;
          uVar6 = ___cxa_guard_release();
        }
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_40;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar4 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_003ba530();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_003ba530();
          if (local_88 == '\0') {
            if (local_90 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_40 = local_90;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar6 = FUN_00d50b20();
      }
      iVar5 = (int)(uVar10 >> 0x20);
    }
    FUN_002e0650();
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


