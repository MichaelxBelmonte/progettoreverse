// Function: FUN_01c441c0
// Address: 01c441c0
// Size: 1019 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x01c444a7) */
/* WARNING: Removing unreachable block (ram,0x01c444b0) */

double FUN_01c441c0(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t in_ECX;
  longlong lVar6;
  undefined1 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  double dVar8;
  longlong local_60;
  char local_58;
  double local_38;
  
  if (unaff_RSI != (undefined1 *)0x0) {
    if (DAT_028b66e8 == 0) {
      bVar7 = true;
    }
    else {
      bVar7 = *(int *)(DAT_028b66e8 + 0x1c8) != 1;
    }
    *unaff_RSI = bVar7;
  }
  if (*unaff_RDI == 0) {
    return DAT_02395720;
  }
  if (param_2 != (undefined1 *)0x0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_016c2730();
    *param_2 = uVar2;
  }
  if (DAT_028b66e8 == 0) goto LAB_01c44568;
  if ((unaff_RSI != (undefined1 *)0x0) && (*(int *)(DAT_028b66e8 + 0x1c8) == 1)) {
    local_38 = *(double *)(DAT_028b66e8 + 0x188);
    if (local_38 != 0.0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_ECX = SUB84(local_38,0);
    }
    FUN_016d8300();
    if (local_60 == 0) {
      cVar3 = '\0';
    }
    else {
      lVar5 = *(longlong *)(DAT_028b66e8 + 0x188);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_016c2730();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0.0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      *unaff_RSI = 1;
    }
  }
  lVar5 = *(longlong *)(DAT_028b66e8 + 0x210);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_016bf360();
  lVar6 = DAT_028b66e8;
  if (cVar3 == '\0') {
    if (*(longlong *)(DAT_028b66e8 + 0x198) == 0) {
      bVar7 = true;
      goto LAB_01c444bc;
    }
    FUN_00d50b00();
    FUN_00d50b20();
    if (param_2 != (undefined1 *)0x0) {
      lVar1 = *(longlong *)(DAT_028b66e8 + 0x188);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016c2730();
      *param_2 = uVar2;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(DAT_028b66e8 + 0x188);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c9480(param_1);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
LAB_01c44550:
    in_ECX = (pthread_key_t)lVar6;
    bVar7 = false;
  }
  else {
    local_38 = *(double *)(DAT_028b66e8 + 0x288);
    if (0.0 < local_38) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 1;
      }
      goto LAB_01c44550;
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)DAT_028b66e8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016cdc10();
    bVar7 = false;
LAB_01c444bc:
    in_ECX = (pthread_key_t)lVar6;
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (!bVar7) {
    return local_38;
  }
LAB_01c44568:
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar8 = (double)FUN_016c9480(param_1);
  return dVar8;
}


