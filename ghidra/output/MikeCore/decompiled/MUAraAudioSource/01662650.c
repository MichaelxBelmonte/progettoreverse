// Function: FUN_01662650
// Address: 01662650
// Size: 1004 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x016629ac) */
/* WARNING: Removing unreachable block (ram,0x016629b9) */
/* WARNING: Removing unreachable block (ram,0x01662811) */
/* WARNING: Removing unreachable block (ram,0x0166281a) */

longlong * FUN_01662650(undefined8 param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar3 = local_68;
  lVar5 = *(longlong *)(unaff_RSI + 0x120);
  if (lVar5 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    goto LAB_01662962;
  }
  if (*(longlong *)(unaff_RSI + 0xf0) != 0) {
    cVar1 = FUN_01667df0();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124e000();
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a500();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b7f0();
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124e100();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
        goto LAB_0166281f;
      }
    }
    else if (local_68 != 0) {
LAB_0166281f:
      local_60 = '\0';
      local_68 = 0;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          local_68 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 8);
          cVar1 = FUN_00e34240();
          if ((cVar1 == '\0') && (cVar1 = FUN_00e34a50(), cVar1 == '\0')) {
            FUN_013fb3a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            pVar4 = (pthread_key_t)param_1;
            if (local_40 != 0) {
              FUN_013fb3a0();
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0141b7f0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              FUN_00540b60();
              FUN_00d50b20();
              return unaff_RDI;
            }
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar3 + 0xc));
      }
      FUN_00540b60();
      FUN_00d50b20();
    }
  }
  FUN_0141b1a0();
  lVar5 = *(longlong *)(unaff_RSI + 0x120);
  lVar3 = lVar5;
  if (lVar5 != local_68) {
    lVar3 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar3 = 0;
        goto LAB_016628e8;
      }
      FUN_00d50b00();
      lVar5 = *(longlong *)(unaff_RSI + 0x120);
      *(longlong *)(unaff_RSI + 0x120) = local_68;
    }
    else {
      local_60 = '\0';
LAB_016628e8:
      *(longlong *)(unaff_RSI + 0x120) = lVar3;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar3 = local_68;
    }
  }
  if ((local_60 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar5 = *(longlong *)(unaff_RSI + 0x120);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
LAB_01662962:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


