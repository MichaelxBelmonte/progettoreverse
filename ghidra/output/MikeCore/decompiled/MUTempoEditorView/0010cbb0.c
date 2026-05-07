// Function: FUN_0010cbb0
// Address: 0010cbb0
// Size: 795 bytes
// Class: MUTempoEditorView


/* WARNING: Removing unreachable block (ram,0x0010cd06) */
/* WARNING: Removing unreachable block (ram,0x0010cd0f) */
/* WARNING: Removing unreachable block (ram,0x0010cd3b) */
/* WARNING: Removing unreachable block (ram,0x0010cd44) */
/* WARNING: Removing unreachable block (ram,0x0010ce83) */
/* WARNING: Removing unreachable block (ram,0x0010ce8c) */

void FUN_0010cbb0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  undefined8 *unaff_RSI;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  plVar8 = (longlong *)*param_2;
  FUN_001152a0();
  if (plVar8 == (longlong *)0x0) {
LAB_0010cbf8:
    plVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = param_2;
    if (cVar5 == '\0') goto LAB_0010cbf8;
  }
  lVar3 = plVar8[1];
  if (((char)lVar3 == '\0') || (*plVar8 == 0)) {
    if (*plVar8 != 0) goto LAB_0010cc24;
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
LAB_0010cc24:
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if (local_40 == '\0') {
      if (local_48 != 0) goto LAB_0010cc87;
    }
    else if (local_48 != 0) {
      FUN_00d50b20();
LAB_0010cc87:
      FUN_00dd6a00();
      local_48 = DAT_026e1370;
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
        local_48 = DAT_026e1370;
      }
      DAT_026e1370 = local_48;
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      FUN_00ca0840();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
    }
    bVar1 = false;
  }
  pVar7 = (pthread_key_t)plVar8;
  plVar8 = (longlong *)*param_2;
  FUN_001154a0();
  if (plVar8 == (longlong *)0x0) {
LAB_0010cd7c:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0010cd7c;
  }
  lVar4 = param_2[1];
  if (((char)lVar4 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) goto LAB_0010ce9e;
  }
  else {
    FUN_00d50b00();
  }
  plVar8 = (longlong *)*unaff_RSI;
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  lVar2 = DAT_02765280;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar2 = DAT_02765280;
  }
  DAT_02765280 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar8 + 0x4f0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((char)lVar4 != '\0') {
    FUN_00d50b20();
  }
LAB_0010ce9e:
  if ((char)lVar3 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  return;
}


