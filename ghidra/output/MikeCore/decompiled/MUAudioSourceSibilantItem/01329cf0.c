// Function: FUN_01329cf0
// Address: 01329cf0
// Size: 567 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x01329d6d) */
/* WARNING: Removing unreachable block (ram,0x01329d79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01329cf0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong *unaff_RDI;
  double dVar3;
  double dVar4;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pVar2 = (pthread_key_t)param_1;
  local_88 = *param_1;
  local_80 = '\0';
  FUN_012e0130(pVar2,&local_88);
  local_58 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)FUN_01259520();
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar4 = (double)FUN_0125a280();
  if (DAT_023b67d8 < (double)((ulonglong)(dVar3 - dVar4) & _DAT_023908f0)) {
    local_78 = *param_2;
    local_70 = '\0';
    FUN_0039e8b0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_60 = '\0';
    local_68 = 0;
    FUN_0127e4d0(0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


