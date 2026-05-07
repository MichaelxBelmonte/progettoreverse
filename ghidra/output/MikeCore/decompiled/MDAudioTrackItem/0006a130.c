// Function: FUN_0006a130
// Address: 0006a130
// Size: 812 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a130(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  longlong **pplVar3;
  void *pvVar4;
  char *pcVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30 [8];
  char local_28 [8];
  
  local_40 = '\0';
  local_48 = (longlong *)0x0;
  FUN_01f27fe0();
  (**(code **)(*local_58 + 0x660))();
  plVar8 = local_38;
  if (local_38 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else if (local_30[0] == '\0') {
    FUN_00d50b00();
    local_48 = plVar8;
    local_40 = '\x01';
    if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = local_38;
    local_40 = '\x01';
    local_30[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0006e1c0();
  if (plVar8 == (longlong *)0x0) {
LAB_0006a1e5:
    pplVar3 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802688 != (longlong *)0x0) goto LAB_0006a1f4;
LAB_0006a218:
    if ((DAT_02700970 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_026d78f8 = FUN_0006e710();
      _DAT_026d78e0 = "MDAudioTrackItem";
      _DAT_026d78e8 = 0x70;
      param_1 = 0x6e6c0;
      _DAT_026d78f0 = FUN_0006e6c0;
      _DAT_026d7900 = 0;
      uRam00000000026d7908 = 0;
      _DAT_026d7910 = 0;
      _DAT_026d7988 = 0;
      uRam00000000026d7990 = 0;
      _DAT_026d7998 = 0;
      DAT_026d799a = 1;
      _DAT_026d7918 = 0;
      uRam00000000026d7920 = 0;
      _DAT_026d7928 = 0;
      uRam00000000026d7930 = 0;
      _DAT_026d7938 = 0;
      uRam00000000026d7940 = 0;
      _DAT_026d7948 = 0;
      uRam00000000026d7950 = 0;
      _DAT_026d7958 = 0;
      uRam00000000026d7960 = 0;
      _DAT_026d7968 = 0;
      uRam00000000026d7970 = 0;
      _DAT_026d7978 = 0;
      uRam00000000026d7980 = 0;
      DAT_026d79a3 = 0;
      _DAT_026d799b = 0;
      ___cxa_guard_release();
    }
    plVar7 = DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar7 = DAT_02802688;
      if (cVar1 != '\0') {
        plVar7 = local_48;
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_0006a377;
    FUN_00075b90();
    if (local_30[0] == '\0') {
      if (local_38 == (longlong *)0x0) goto LAB_0006a377;
      FUN_00d50b00();
      if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == (longlong *)0x0) goto LAB_0006a377;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    pcVar5 = local_28;
    if (local_30[0] != '\0') {
      pcVar5 = local_30;
    }
    local_28[0] = local_30[0];
    *pcVar5 = '\0';
    if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == (longlong *)0x0) {
      cVar6 = '\0';
      cVar1 = '\0';
      plVar7 = (longlong *)0x0;
    }
    else {
      cVar6 = '\x01';
      cVar1 = '\x01';
      plVar7 = local_38;
      if (local_28[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_50 != '\0') && (cVar1 = cVar6, local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0006a1e5;
    pplVar3 = &local_48;
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_0006a218;
LAB_0006a1f4:
    cVar1 = *(char *)(pplVar3 + 1);
    if (cVar1 != '\0') {
      FUN_00d50b00();
    }
  }
  if ((cVar1 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006a377:
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


