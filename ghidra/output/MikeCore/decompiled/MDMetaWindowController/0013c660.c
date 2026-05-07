// Function: FUN_0013c660
// Address: 0013c660
// Size: 1172 bytes
// Class: MDMetaWindowController


void FUN_0013c660(double param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  pthread_key_t in_ECX;
  pthread_key_t pVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(double *)(unaff_RDI + 0xf8) != 0.0) || (NAN(*(double *)(unaff_RDI + 0xf8)))) {
    FUN_00139430();
  }
  lVar5 = *(longlong *)(unaff_RDI + 0xb8);
  if ((lVar5 == 0) || (*(longlong *)(unaff_RDI + 0xc0) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0013c771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x998))();
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
    if (param_1 < *(double *)(unaff_RDI + 0xd8)) {
      *(undefined8 *)(unaff_RDI + 0xd0) = 0;
      FUN_00d50b20();
    }
    if (param_1 < *(double *)(unaff_RDI + 0xe0) || param_1 == *(double *)(unaff_RDI + 0xe0)) {
LAB_0013c70f:
      lVar5 = *(longlong *)(unaff_RDI + 0xd0);
    }
    else {
      lVar5 = 0;
      if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
        *(undefined8 *)(unaff_RDI + 0xd0) = 0;
        FUN_00d50b20();
        goto LAB_0013c70f;
      }
    }
    if (lVar5 != 0) {
      if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
        return;
      }
      FUN_00248dc0();
      FUN_01e058a0();
      return;
    }
    lVar5 = *(longlong *)(unaff_RDI + 0xb8);
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_48 == 0) goto LAB_0013ca77;
  lVar5 = *(longlong *)(unaff_RDI + 0xc0);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_016cb940(param_1,0);
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(uVar2,0,unaff_RDI + 0xe8,unaff_RDI + 0xf0);
  pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar2 >> 8),local_40[0]);
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(unaff_RDI + 0xd0);
  if (lVar5 == local_48) {
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
LAB_0013c961:
    lVar6 = *(longlong *)(unaff_RDI + 0xd0);
  }
  else {
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      lVar5 = *(longlong *)(unaff_RDI + 0xd0);
    }
    *(longlong *)(unaff_RDI + 0xd0) = local_48;
    lVar6 = local_48;
    if (lVar5 != 0) {
      FUN_00d50b20();
      goto LAB_0013c961;
    }
  }
  if (lVar6 != 0) {
    if (*(int *)(unaff_RDI + 0xec) == 0) {
      *(undefined8 *)(unaff_RDI + 0xd8) = 0xffefffffffffffff;
    }
    else {
      lVar5 = *(longlong *)(unaff_RDI + 0xc0);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016c98e0();
      *(undefined8 *)(unaff_RDI + 0xd8) = uVar2;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int *)(unaff_RDI + 0xf4) == 0) {
      *(undefined8 *)(unaff_RDI + 0xe0) = 0x7fefffffffffffff;
    }
    else {
      lVar5 = *(longlong *)(unaff_RDI + 0xc0);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016c98e0();
      *(undefined8 *)(unaff_RDI + 0xe0) = uVar2;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
  }
LAB_0013ca77:
  if (*(longlong *)(unaff_RDI + 0xd0) == 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x998))();
  }
  else {
    if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
      FUN_00248dc0();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x998))();
    FUN_01e058a0();
    FUN_0013cc10();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


