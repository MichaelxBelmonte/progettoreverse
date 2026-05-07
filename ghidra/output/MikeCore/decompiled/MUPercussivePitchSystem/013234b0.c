// Function: FUN_013234b0
// Address: 013234b0
// Size: 1078 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x01323822) */
/* WARNING: Removing unreachable block (ram,0x0132382b) */
/* WARNING: Removing unreachable block (ram,0x013236c2) */
/* WARNING: Removing unreachable block (ram,0x013236cb) */
/* WARNING: Removing unreachable block (ram,0x01323562) */
/* WARNING: Removing unreachable block (ram,0x0132356e) */
/* WARNING: Removing unreachable block (ram,0x01323612) */
/* WARNING: Removing unreachable block (ram,0x0132361b) */
/* WARNING: Removing unreachable block (ram,0x01323772) */
/* WARNING: Removing unreachable block (ram,0x0132377b) */
/* WARNING: Removing unreachable block (ram,0x013238d2) */
/* WARNING: Removing unreachable block (ram,0x013238db) */

void FUN_013234b0(longlong param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[8] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df660();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[8] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x19] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x19] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x1a] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x1a] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x1d] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x1d] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x20] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x20] + 0xc);
    } while (lVar3 < param_1);
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (0 < *(int *)(unaff_RDI[0x1c] + 0xc))) {
    lVar3 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbd70();
      lVar3 = lVar3 + 1;
      param_1 = (longlong)*(int *)(unaff_RDI[0x1c] + 0xc);
    } while (lVar3 < param_1);
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0xffffffff;
  if (unaff_RDI[0x32] != 0) {
    FUN_00e83070();
    unaff_RDI[0x32] = 0;
  }
  FUN_00e8b7e0();
  return;
}


