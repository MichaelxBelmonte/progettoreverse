// Function: FUN_002f1240
// Address: 002f1240
// Size: 640 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


int64_t * FUN_002f1240(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  uVar6 = FUN_01bf2670();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_002f147d;
    uVar6 = FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_002f147d;
  local_50 = 0;
  local_58 = (int64_t *)0x0;
  local_48 = plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    iVar3 = iStack_3c;
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        uVar6 = FUN_00d23690(uVar6,iStack_3c);
        local_38 = local_38 + iVar3;
        iStack_3c = 0;
      }
    }
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
    plVar1 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
    local_58 = plVar1;
    if ((g_02700970 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar3 != 0)) {
      g_026d78f8 = FUN_0006e710();
      g_026d78e0 = "MDAudioTrackItem";
      g_026d78e8 = 0x70;
      g_026d78f0 = FUN_0006e6c0;
      g_026d7900 = 0;
      ram_00000000026d7908 = 0;
      g_026d7910 = 0;
      g_026d7988 = 0;
      ram_00000000026d7990 = 0;
      g_026d7998 = 0;
      g_026d799a = 1;
      g_026d7918 = 0;
      ram_00000000026d7920 = 0;
      g_026d7928 = 0;
      ram_00000000026d7930 = 0;
      g_026d7938 = 0;
      ram_00000000026d7940 = 0;
      g_026d7948 = 0;
      ram_00000000026d7950 = 0;
      g_026d7958 = 0;
      ram_00000000026d7960 = 0;
      g_026d7968 = 0;
      ram_00000000026d7970 = 0;
      g_026d7978 = 0;
      ram_00000000026d7980 = 0;
      g_026d79a3 = 0;
      g_026d799b = 0;
      uVar6 = ___cxa_guard_release();
    }
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_58;
      uVar6 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
    plVar1 = *pplVar5;
    if (plVar1 != (int64_t *)0x0) {
      uVar6 = FUN_00075b90();
      lVar4 = *param_2;
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if (local_78 == lVar4) {
        *(void*)(this_ptr + 1) = 0;
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar1;
        *(void*)(this_ptr + 1) = 1;
        FUN_002e0650();
        FUN_00d50b20();
        return this_ptr;
      }
    }
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002f147d:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

