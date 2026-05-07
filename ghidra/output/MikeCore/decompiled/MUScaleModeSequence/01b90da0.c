// Function: FUN_01b90da0
// Address: 01b90da0
// Size: 1126 bytes
// Class: MUScaleModeSequence


/* WARNING: Removing unreachable block (ram,0x01b9105f) */
/* WARNING: Removing unreachable block (ram,0x01b90fc7) */
/* WARNING: Removing unreachable block (ram,0x01b90fd3) */
/* WARNING: Removing unreachable block (ram,0x01b91106) */
/* WARNING: Removing unreachable block (ram,0x01b9110f) */
/* WARNING: Removing unreachable block (ram,0x01b910bc) */
/* WARNING: Removing unreachable block (ram,0x01b910c5) */
/* WARNING: Removing unreachable block (ram,0x01b91136) */
/* WARNING: Removing unreachable block (ram,0x01b9113f) */
/* WARNING: Removing unreachable block (ram,0x01b91020) */
/* WARNING: Removing unreachable block (ram,0x01b9102c) */
/* WARNING: Removing unreachable block (ram,0x01b9106b) */
/* WARNING: Removing unreachable block (ram,0x01b911ef) */
/* WARNING: Removing unreachable block (ram,0x01b911fc) */
/* WARNING: Removing unreachable block (ram,0x01b90f2b) */
/* WARNING: Removing unreachable block (ram,0x01b90f38) */
/* WARNING: Removing unreachable block (ram,0x01b90f00) */
/* WARNING: Removing unreachable block (ram,0x01b90f09) */
/* WARNING: Removing unreachable block (ram,0x01b911a7) */
/* WARNING: Removing unreachable block (ram,0x01b911b4) */

void FUN_01b90da0(pthread_key_t param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_48;
  char local_40;
  
  plVar1 = (longlong *)*param_2;
  FUN_0013de80();
  if (plVar1 == (longlong *)0x0) {
LAB_01b90de8:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01b90de8;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  if (*(longlong *)(unaff_RSI + 0x1f8) == 0) {
LAB_01b90ece:
    bVar3 = false;
    lVar7 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(longlong *)(unaff_RSI + 0x1f8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_01b90ece;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    if (local_48 == 0) {
      lVar7 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar7 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b91500();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01b91091;
    FUN_00d50b00();
LAB_01b90f99:
    FUN_01246780();
    (**(code **)(**(longlong **)(unaff_RSI + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  else {
    if (local_48 != 0) goto LAB_01b90f99;
LAB_01b91091:
    if (lVar7 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x01b91165;
    }
    FUN_01246780();
    (**(code **)(**(longlong **)(unaff_RSI + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((bVar3) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
joined_r0x01b91165:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}


