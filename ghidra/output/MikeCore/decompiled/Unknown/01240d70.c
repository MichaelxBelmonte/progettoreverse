// Function: FUN_01240d70
// Address: 01240d70
// Size: 1606 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01241261) */
/* WARNING: Removing unreachable block (ram,0x0124126a) */
/* WARNING: Removing unreachable block (ram,0x012410b9) */
/* WARNING: Removing unreachable block (ram,0x012410c2) */
/* WARNING: Removing unreachable block (ram,0x012411ba) */
/* WARNING: Removing unreachable block (ram,0x012411c3) */
/* WARNING: Removing unreachable block (ram,0x01241368) */
/* WARNING: Removing unreachable block (ram,0x01241371) */

longlong * FUN_01240d70(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  longlong local_b8;
  char local_b0;
  
  FUN_01241610();
  if ((local_b0 == '\0') && (local_b8 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(longlong *)(local_b8 + 0x50);
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(local_b8 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x50)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  lVar1 = DAT_027be578;
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
    lVar1 = DAT_027be578;
  }
  DAT_027be578 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01240140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(longlong *)(local_b8 + 0x50);
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(local_b8 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x50)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012401b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4[7] = 0;
  *puVar4 = &DAT_024cbc70;
  *(undefined4 *)(puVar4 + 8) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124a800();
  pvVar2 = _pthread_getspecific(param_1);
  lVar3 = DAT_027be580;
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
    lVar3 = DAT_027be580;
  }
  DAT_027be580 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_012a51c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01240690();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_024cc370;
  puVar4[7] = 0;
  puVar4[8] = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fb40();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fae0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fa90();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(longlong *)(local_b8 + 0x50);
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(local_b8 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x50)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01240230();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_024cc370;
  puVar5[7] = 0;
  puVar5[8] = 0;
  FUN_00d500e0();
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fb40();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fae0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fa90();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(longlong *)(local_b8 + 0x50);
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(local_b8 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x50)
    ;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01240230();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = local_b8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  return unaff_RDI;
}


