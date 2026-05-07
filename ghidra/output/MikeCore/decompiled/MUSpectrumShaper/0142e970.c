// Function: FUN_0142e970
// Address: 0142e970
// Size: 618 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0142eb44) */
/* WARNING: Removing unreachable block (ram,0x0142eb4d) */
/* WARNING: Removing unreachable block (ram,0x0142e9f6) */
/* WARNING: Removing unreachable block (ram,0x0142e9ff) */
/* WARNING: Removing unreachable block (ram,0x0142eb0d) */
/* WARNING: Removing unreachable block (ram,0x0142eb19) */
/* WARNING: Removing unreachable block (ram,0x0142eb21) */
/* WARNING: Removing unreachable block (ram,0x0142eb26) */
/* WARNING: Removing unreachable block (ram,0x0142eb89) */

void FUN_0142e970(double param_1,undefined8 param_2)

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong *in_RCX;
  longlong *unaff_RSI;
  double dVar3;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  double local_60;
  longlong local_40;
  char local_38;
  
  pVar2 = (pthread_key_t)in_RCX;
  local_90 = *unaff_RSI;
  local_88 = 0;
  local_60 = param_1;
  FUN_0142e5e0(pVar2,&local_90);
  if (local_40 == 0) {
    FUN_0142ed20();
    local_80 = *unaff_RSI;
    local_78 = '\0';
    FUN_0123f630();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_00d21140();
    local_70 = *unaff_RSI;
    local_68 = '\0';
    FUN_012c3160(local_60,param_2);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (*in_RCX != 0) {
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (double)FUN_013201a0();
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_01320130();
      FUN_012c5ff0(local_60 - dVar3);
      *(undefined1 *)(local_40 + 0x108) = 1;
    }
    FUN_00d50b20();
  }
  return;
}


