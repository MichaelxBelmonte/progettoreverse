// Function: FUN_01dd66d0
// Address: 01dd66d0
// Size: 551 bytes
// Class: GNControl
// String references:
//   "GNControl"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01dd66d0(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar8;
  int64_t *local_58;
  uint8_t local_50;
  int64_t local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  local_48 = *(int64_t *)(arg1 + 0x38);
  if (local_48 == 0) {
LAB_01dd68c9:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_50 = 0;
    local_58 = (int64_t *)0x0;
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
            lVar4 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(local_48 + 0xc) <= local_40) {
              FUN_000a9680();
              goto LAB_01dd68c9;
            }
            plVar1 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar4 * 8);
            param_2 = uVar8;
            iVar3 = iVar6;
            local_58 = plVar1;
          } while (plVar1 == *(int64_t **)(arg1 + 0x298));
          param_2 = (**(code **)(*plVar1 + 0x4d8))();
          cVar2 = FUN_00d05410(param_1,param_2,uVar8);
          uVar7 = extraout_XMM0_Da;
        } while (cVar2 == '\0');
        if ((g_026e43b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_026df898 = FUN_0006d940();
          g_026df880 = "GNControl";
          g_026df888 = 0x1c8;
          g_026df890 = FUN_000858d0;
          g_026df8a0 = 0;
          ram_00000000026df8a8 = 0;
          g_026df8b0 = 0;
          ram_00000000026df8b8 = 0;
          g_026df8c0 = 0;
          ram_00000000026df8c8 = 0;
          g_026df8d0 = 0;
          ram_00000000026df8d8 = 0;
          g_026df8e0 = 0;
          ram_00000000026df8e8 = 0;
          g_026df8f0 = 0;
          ram_00000000026df8f8 = 0;
          g_026df900 = 0;
          ram_00000000026df908 = 0;
          g_026df910 = 0;
          ram_00000000026df918 = 0;
          g_026df920 = 0;
          ram_00000000026df928 = 0;
          g_026df930 = 0;
          ram_00000000026df938 = 0;
          g_026df940 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar2 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
        plVar1 = *pplVar5;
        uVar7 = extraout_XMM0_Da_00;
        if (*(char *)(pplVar5 + 1) == '\0') break;
        *(void*)(pplVar5 + 1) = 0;
        iVar3 = iStack_3c;
        if (plVar1 != (int64_t *)0x0) goto LAB_01dd68ef;
      }
      iVar3 = iStack_3c;
    } while (plVar1 == (int64_t *)0x0);
    FUN_00d50b00();
LAB_01dd68ef:
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
    FUN_000a9680();
  }
  return;
}

