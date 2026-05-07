// Function: FUN_01687020
// Address: 01687020
// Size: 4834 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0168790a) */
/* WARNING: Removing unreachable block (ram,0x01687916) */
/* WARNING: Removing unreachable block (ram,0x01687720) */
/* WARNING: Removing unreachable block (ram,0x0168772c) */
/* WARNING: Removing unreachable block (ram,0x0168754d) */
/* WARNING: Removing unreachable block (ram,0x01687559) */
/* WARNING: Removing unreachable block (ram,0x016875b9) */
/* WARNING: Removing unreachable block (ram,0x016875c5) */
/* WARNING: Removing unreachable block (ram,0x016878b6) */
/* WARNING: Removing unreachable block (ram,0x016878c2) */
/* WARNING: Removing unreachable block (ram,0x01687fbc) */
/* WARNING: Removing unreachable block (ram,0x01687fc8) */
/* WARNING: Removing unreachable block (ram,0x016882a8) */
/* WARNING: Removing unreachable block (ram,0x016882b4) */
/* WARNING: Removing unreachable block (ram,0x0168816b) */
/* WARNING: Removing unreachable block (ram,0x01688178) */
/* WARNING: Removing unreachable block (ram,0x01687f25) */
/* WARNING: Removing unreachable block (ram,0x01687f36) */
/* WARNING: Removing unreachable block (ram,0x01687f47) */
/* WARNING: Removing unreachable block (ram,0x01687f55) */
/* WARNING: Removing unreachable block (ram,0x01687f74) */
/* WARNING: Removing unreachable block (ram,0x01687f85) */
/* WARNING: Removing unreachable block (ram,0x01687f93) */
/* WARNING: Removing unreachable block (ram,0x01687fd3) */
/* WARNING: Removing unreachable block (ram,0x01687fdc) */
/* WARNING: Removing unreachable block (ram,0x016881ab) */
/* WARNING: Removing unreachable block (ram,0x016881b8) */

void FUN_01687020(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar10;
  longlong local_148;
  char local_140;
  longlong local_d8;
  char local_d0;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  if ((*unaff_RSI == 0) && (*param_2 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  local_38 = plVar4;
  (**(code **)(*plVar4 + 0x18))();
  if (*unaff_RSI == 0) {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01770c50();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      plVar4 = (longlong *)FUN_018238e0();
      (**(code **)(*plVar4 + 0x18))();
      FUN_0176f970();
      lVar6 = local_48;
      if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0176f850();
      FUN_01774240();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar4;
      }
      FUN_01822eb0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = local_38;
      }
      FUN_0150d0b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = local_38;
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      lVar6 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0150d0b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = local_38;
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    lVar6 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_0150d0b0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*param_2 == 0) {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = local_38;
    }
    FUN_01513590();
  }
  else {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    lVar6 = local_48;
    if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = local_38;
    }
    FUN_0150ceb0();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = local_38;
    }
    FUN_0150eb60();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    lVar7 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_0124ae90();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if (*param_2 != 0) {
    if (*unaff_RSI != 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_018232b0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_0124ae30();
      if (iVar3 <= iVar2) goto LAB_01687a94;
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = local_38;
    }
    FUN_0150eb60();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124ae30();
    FUN_018232c0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01687a94:
  if (*unaff_RSI != 0) {
    if (*param_2 != 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_0124ae30();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_018232b0();
      if (iVar3 <= iVar2) goto LAB_01687c05;
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = local_38;
    }
    FUN_01510030();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018232b0();
    FUN_0124ae40();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01687c05:
  local_40 = '\0';
  local_48 = 0;
  while( true ) {
    pVar9 = (pthread_key_t)param_1;
    pvVar5 = _pthread_getspecific(pVar9);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar9 = (pthread_key_t)local_38;
    }
    FUN_01510d50();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_00e7bdb0();
    param_1 = (longlong *)FUN_00e7bdb0();
    cVar1 = FUN_01252960(param_1,uVar8,&local_48,0);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') break;
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770c90();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736d70();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017548e0();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770c90();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736d70();
    if (local_58 == 0) {
      bVar10 = true;
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736d70();
      iVar2 = FUN_00d8c7a0();
      bVar10 = iVar2 == 0;
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (((bVar10) && (local_58 != 0)) && (iVar2 = FUN_00d8c7a0(), 0 < iVar2)) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01735c40();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_58 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


