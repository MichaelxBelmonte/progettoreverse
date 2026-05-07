// Function: FUN_0070f740
// Address: 0070f740
// Size: 754 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0070f740(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01beea30();
    lVar3 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0xc) < 1) {
LAB_0070f922:
        uVar8 = 0;
      }
      else {
        FUN_00d23310();
        lVar1 = local_48;
        pcVar6 = local_38;
        if (local_40[0] != '\0') {
          pcVar6 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pplVar7 = &local_58;
        FUN_01bc1260();
        plVar2 = local_58;
        if (DAT_026ffff0 == '\0') {
          iVar5 = ___cxa_guard_acquire();
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
            ___cxa_guard_release();
          }
        }
        if (plVar2 == (longlong *)0x0) {
LAB_0070f844:
          pplVar7 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') goto LAB_0070f844;
        }
        plVar2 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar7 + 1) = 0;
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 == (longlong *)0x0) goto LAB_0070f922;
        FUN_003ba530();
        lVar1 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0070f8e2;
          }
LAB_0070f949:
          uVar8 = 0;
        }
        else {
LAB_0070f8e2:
          if ((lVar1 != 0) && (param_2 != '\0')) {
            FUN_003b7710();
            FUN_003bcea0(0,0,1 < *(int *)(lVar3 + 0xc));
          }
          if (lVar1 == 0) goto LAB_0070f949;
          uVar8 = CONCAT71((int7)((ulonglong)pplVar7 >> 8),1);
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0070f95b;
    }
  }
  uVar8 = 0;
LAB_0070f95b:
  return uVar8 & 0xffffffff;
}


