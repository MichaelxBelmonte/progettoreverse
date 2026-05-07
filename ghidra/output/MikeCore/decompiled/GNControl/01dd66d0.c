// Function: FUN_01dd66d0
// Address: 01dd66d0
// Size: 551 bytes
// Class: GNControl
// String references:
//   "GNControl"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd66d0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  longlong *local_58;
  undefined1 local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  local_48 = *(longlong *)(unaff_RSI + 0x38);
  if (local_48 == 0) {
LAB_01dd68c9:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    uVar7 = param_1;
    iVar3 = 0;
    do {
      while( true ) {
        do {
          do {
            iVar6 = 0;
            uVar8 = param_2;
            if (iVar3 != 0) {
              if (iVar3 < 1) {
                iVar6 = -iVar3;
                iStack_3c = iVar6;
              }
              else {
                local_40 = local_40 - iVar3;
                uVar7 = FUN_00d23690(uVar7,iVar3);
                local_38 = local_38 + iVar3;
                iVar6 = 0;
                uVar8 = param_2;
                iStack_3c = iVar6;
              }
            }
            lVar4 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(local_48 + 0xc) <= local_40) {
              FUN_000a9680();
              goto LAB_01dd68c9;
            }
            plVar1 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar4 * 8);
            param_2 = uVar8;
            iVar3 = iVar6;
            local_58 = plVar1;
          } while (plVar1 == *(longlong **)(unaff_RSI + 0x298));
          param_2 = (**(code **)(*plVar1 + 0x4d8))();
          cVar2 = FUN_00d05410(param_1,param_2,uVar8);
          uVar7 = extraout_XMM0_Da;
        } while (cVar2 == '\0');
        if ((DAT_026e43b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
        plVar1 = *pplVar5;
        uVar7 = extraout_XMM0_Da_00;
        if (*(char *)(pplVar5 + 1) == '\0') break;
        *(undefined1 *)(pplVar5 + 1) = 0;
        iVar3 = iStack_3c;
        if (plVar1 != (longlong *)0x0) goto LAB_01dd68ef;
      }
      iVar3 = iStack_3c;
    } while (plVar1 == (longlong *)0x0);
    FUN_00d50b00();
LAB_01dd68ef:
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_000a9680();
  }
  return;
}


