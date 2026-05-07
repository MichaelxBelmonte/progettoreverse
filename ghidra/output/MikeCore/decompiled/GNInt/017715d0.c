// Function: FUN_017715d0
// Address: 017715d0
// Size: 716 bytes
// Class: GNInt


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_017715d0(float param_1,float *param_2)

{
  int iVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  float *in_RCX;
  char *pcVar4;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  float fVar5;
  longlong local_58;
  char local_50 [8];
  float *local_48;
  float local_40;
  float local_3c;
  char local_38 [8];
  
  local_3c = DAT_02390124;
  if (DAT_02390124 <= param_1) {
    local_3c = param_1;
  }
  local_48 = in_RCX;
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    if ((int)unaff_ESI < 0) {
      return 0;
    }
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    if (iVar1 <= (int)unaff_ESI) {
      return 0;
    }
    if (unaff_ESI == 0) {
      FUN_00d23310();
      pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_50[0]);
      pcVar4 = local_38;
      if (local_50[0] != '\0') {
        pcVar4 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar4 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
      *param_2 = fVar5 + DAT_0240f124;
      if ((local_38[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar2 = _pthread_getspecific
                         ((pthread_key_t)*(undefined8 *)(*(longlong *)(unaff_RDI + 0x50) + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
      *param_2 = fVar5 + local_3c;
    }
    if (iVar1 - 1U == unaff_ESI) {
      pvVar2 = _pthread_getspecific(unaff_ESI);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
      fVar5 = fVar5 + _DAT_02394238;
      goto LAB_01771787;
    }
  }
  else {
    if (unaff_ESI == 0) {
      unaff_ESI = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc) - 2;
      pvVar2 = _pthread_getspecific(unaff_ESI);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (float)FUN_01779ec0();
      fVar5 = (float)FUN_017708f0();
      fVar5 = local_40 - fVar5;
    }
    else {
      pvVar2 = _pthread_getspecific((pthread_key_t)in_RCX);
      unaff_ESI = (pthread_key_t)in_RCX;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
    }
    *param_2 = fVar5 + local_3c;
  }
  pvVar2 = _pthread_getspecific(unaff_ESI);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_01779ec0();
  fVar5 = fVar5 - local_3c;
LAB_01771787:
  *local_48 = fVar5;
  return 1;
}


