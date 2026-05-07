// Function: FUN_004fa380
// Address: 004fa380
// Size: 1475 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x004fa547) */
/* WARNING: Removing unreachable block (ram,0x004fa550) */
/* WARNING: Removing unreachable block (ram,0x004fa5b4) */
/* WARNING: Removing unreachable block (ram,0x004fa5bd) */
/* WARNING: Removing unreachable block (ram,0x004fa607) */
/* WARNING: Removing unreachable block (ram,0x004fa630) */
/* WARNING: Removing unreachable block (ram,0x004fa609) */
/* WARNING: Removing unreachable block (ram,0x004fa632) */

void FUN_004fa380(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  void *pvVar2;
  char *pcVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong local_f8;
  char local_f0 [8];
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  longlong local_60;
  char local_58;
  int local_48;
  char local_38 [8];
  
  local_78 = param_2;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  lVar6 = *unaff_RDI;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != local_60) goto LAB_004fa4e8;
  local_e8 = *unaff_RDI;
  local_e0 = '\0';
  FUN_00243390();
  lVar6 = *unaff_RDI;
  if (lVar6 == local_60) {
    if (((char)unaff_RDI[1] != '\0') || (local_60 == 0)) goto LAB_004fa4ba;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004fa4b5;
    }
LAB_004fa47a:
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_58 = '\0';
  }
  else {
    lVar1 = unaff_RDI[1];
    if (local_58 != '\0') {
      *unaff_RDI = local_60;
      if (((char)lVar1 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004fa47a;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_60;
    if (((char)lVar1 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
LAB_004fa4b5:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_004fa4ba:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
LAB_004fa4e8:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *unaff_RDI;
  if (lVar6 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar6 + 0xc)) {
      pVar4 = (pthread_key_t)*(undefined8 *)(lVar6 + 0x10);
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      local_38[0] = local_f0[0];
      pcVar5 = local_38;
      pcVar3 = local_f0;
      if (local_f0[0] == '\0') {
        pcVar3 = pcVar5;
      }
      *pcVar3 = '\0';
      if ((local_f0[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      pVar4 = (pthread_key_t)pcVar5;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c8 = local_f8;
      local_c0 = '\0';
      FUN_0150d560();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b8 = local_f8;
      local_b0 = '\0';
      FUN_0150d3a0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    param_1 = (pthread_key_t)lVar6;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = *unaff_RDI;
  local_a0 = '\0';
  FUN_012e6fe0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = *unaff_RDI;
  local_90 = '\0';
  FUN_012e6c30();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_88 = *unaff_RDI;
  local_80 = '\0';
  FUN_01298d30();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


