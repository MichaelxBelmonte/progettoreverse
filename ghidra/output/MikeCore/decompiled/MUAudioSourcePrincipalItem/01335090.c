// Function: FUN_01335090
// Address: 01335090
// Size: 1340 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01335215) */
/* WARNING: Removing unreachable block (ram,0x01335221) */
/* WARNING: Removing unreachable block (ram,0x013352d5) */
/* WARNING: Removing unreachable block (ram,0x013352de) */
/* WARNING: Removing unreachable block (ram,0x0133551e) */
/* WARNING: Removing unreachable block (ram,0x0133552b) */
/* WARNING: Removing unreachable block (ram,0x01335430) */
/* WARNING: Removing unreachable block (ram,0x01335439) */

void FUN_01335090(pthread_key_t param_1,ulonglong param_2)

{
  pthread_key_t pVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  param_2 = param_2 & 0xffffffff;
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 == 3) {
      return;
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25eec60;
  *puVar4 = &DAT_025eec60;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  (*DAT_025eec78)();
  pvVar5 = _pthread_getspecific(pVar7);
  pVar1 = (pthread_key_t)puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar7 = pVar1;
  }
  FUN_01538fb0();
  pvVar5 = _pthread_getspecific(pVar7);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar7 = pVar1;
  }
  FUN_01539020(DAT_023908e0);
  pvVar5 = _pthread_getspecific(pVar7);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar7 = pVar1;
  }
  FUN_015390a0();
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e2c20(param_2,0);
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0133523e;
  }
  else {
LAB_0133523e:
    cVar2 = FUN_01334f30();
    if (cVar2 == '\0') goto LAB_013352e3;
  }
  FUN_013359c0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_013357a0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_013352e3:
  pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126f610();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a5f0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_70 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}


