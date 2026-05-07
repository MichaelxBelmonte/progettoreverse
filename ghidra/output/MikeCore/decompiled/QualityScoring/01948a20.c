// Function: FUN_01948a20
// Address: 01948a20
// Size: 807 bytes
// Class: QualityScoring


/* WARNING: Removing unreachable block (ram,0x01948cce) */
/* WARNING: Removing unreachable block (ram,0x01948cdb) */

longlong * FUN_01948a20(char *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  char *pcVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0) {
LAB_01948cfa:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar6 = 0;
    do {
      pVar5 = (pthread_key_t)param_1;
      if (*(int *)(local_70 + 0xc) <= (int)lVar6) {
        FUN_000be170();
        FUN_00d50b20();
        goto LAB_01948cfa;
      }
      lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
      FUN_01941c70();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      FUN_00d23310();
      local_38[0] = local_40[0];
      param_1 = local_38;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = param_1;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != local_d0);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_000be170();
    FUN_00d50b20();
  }
  return unaff_RDI;
}


