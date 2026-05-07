// Function: FUN_004a5d20
// Address: 004a5d20
// Size: 1430 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x004a6282) */
/* WARNING: Removing unreachable block (ram,0x004a628e) */
/* WARNING: Removing unreachable block (ram,0x004a60d8) */
/* WARNING: Removing unreachable block (ram,0x004a60e4) */
/* WARNING: Removing unreachable block (ram,0x004a6218) */
/* WARNING: Removing unreachable block (ram,0x004a6224) */
/* WARNING: Removing unreachable block (ram,0x004a62b3) */
/* WARNING: Removing unreachable block (ram,0x004a62bf) */
/* WARNING: Removing unreachable block (ram,0x004a618b) */
/* WARNING: Removing unreachable block (ram,0x004a6198) */
/* WARNING: Removing unreachable block (ram,0x004a5f87) */
/* WARNING: Removing unreachable block (ram,0x004a5fb0) */
/* WARNING: Removing unreachable block (ram,0x004a5f89) */
/* WARNING: Removing unreachable block (ram,0x004a5fb2) */
/* WARNING: Removing unreachable block (ram,0x004a613f) */
/* WARNING: Removing unreachable block (ram,0x004a614b) */

void FUN_004a5d20(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_e0;
  char local_d8;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  int local_48;
  longlong *local_38;
  
  plVar4 = param_1;
  if (*param_1 == 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    lVar5 = *param_1;
    if (lVar5 == local_60) {
      if (((char)param_1[1] != '\0') || (local_60 == 0)) goto LAB_004a5e2e;
      if (local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_004a5e27;
      }
    }
    else {
      lVar1 = param_1[1];
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_60;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_004a5e27:
        local_38 = param_1 + 1;
        *(undefined1 *)local_38 = 1;
LAB_004a5e2e:
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_004a5e42;
      }
      *param_1 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = param_1 + 1;
    *(undefined1 *)local_38 = 1;
  }
LAB_004a5e42:
  pVar3 = (pthread_key_t)plVar4;
  if (*param_3 != 0) goto LAB_004a5f38;
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  lVar5 = *param_3;
  if (lVar5 == local_60) {
    if (((char)param_3[1] != '\0') || (local_60 == 0)) goto LAB_004a5f24;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004a5f1d;
    }
  }
  else {
    lVar1 = param_3[1];
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_004a5f1d:
      local_38 = param_3 + 1;
      *(undefined1 *)local_38 = 1;
LAB_004a5f24:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004a5f38;
    }
    *param_3 = local_60;
    if (((char)lVar1 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = param_3 + 1;
  *(undefined1 *)local_38 = 1;
LAB_004a5f38:
  lVar5 = *unaff_RDI;
  if (lVar5 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar5 + 0xc)) {
      pVar3 = (pthread_key_t)*(undefined8 *)(lVar5 + 0x10);
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d560();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d3a0();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    pVar3 = (pthread_key_t)lVar5;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6fe0();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  FUN_01298d30();
  return;
}


