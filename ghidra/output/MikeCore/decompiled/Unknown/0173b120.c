// Function: FUN_0173b120
// Address: 0173b120
// Size: 1020 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0173b1a7) */
/* WARNING: Removing unreachable block (ram,0x0173b1b0) */

void FUN_0173b120(longlong param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    lVar4 = *unaff_RSI;
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar4 + 0x68) != '\0') {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        cVar1 = *(char *)(local_48 + 0x68);
        lVar4 = local_48;
      }
      else {
        lVar4 = *(longlong *)(local_48 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        cVar1 = *(char *)(lVar4 + 0x68);
        param_1 = local_48;
      }
      if (cVar1 != '\0') {
        *(undefined1 *)(lVar4 + 0x68) = 0;
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      lVar4 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar4 = *(longlong *)(local_48 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        param_1 = local_48;
      }
      lVar3 = *unaff_RSI;
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *unaff_RSI;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      lVar3 = *(longlong *)(lVar3 + 0x58);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (*(longlong *)(lVar4 + 0x58) != local_48) {
        FUN_00d64850();
        lVar5 = *(longlong *)(lVar4 + 0x58);
        if (lVar5 != local_48) {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *(longlong *)(lVar4 + 0x58) = local_48;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      lVar4 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        lVar4 = *(longlong *)(local_48 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      lVar3 = *unaff_RSI;
      pVar6 = (pthread_key_t)param_1;
      pvVar2 = _pthread_getspecific(pVar6);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *unaff_RSI;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      lVar3 = *(longlong *)(lVar3 + 0x60);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar6);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (*(longlong *)(lVar4 + 0x60) != local_48) {
        FUN_00d64850();
        lVar5 = *(longlong *)(lVar4 + 0x60);
        if (lVar5 != local_48) {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *(longlong *)(lVar4 + 0x60) = local_48;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


