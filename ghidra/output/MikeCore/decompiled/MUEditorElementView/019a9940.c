// Function: FUN_019a9940
// Address: 019a9940
// Size: 708 bytes
// Class: MUEditorElementView


longlong * FUN_019a9940(double param_1,double param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  int in_EDX;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    param_2 = param_2 - param_1;
    cVar3 = (char)in_ECX;
    if (in_EDX == 0) {
      if (cVar3 != '\0') {
        lVar5 = 0;
        do {
          if (*(int *)(lVar1 + 0xc) <= (int)lVar5) goto LAB_019a9bfb;
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_012755a0(param_1,param_2);
          lVar5 = lVar5 + 1;
        } while (cVar3 == '\0');
LAB_019a9baa:
        *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x019a9bdf:
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_001159b0();
        return unaff_RDI;
      }
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar6 = **(longlong **)(lVar1 + 0x10);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x019a9bdf;
      }
    }
    else if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      if (in_EDX == 1) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 == '\0') {
            if (cVar3 == '\0') goto LAB_019a9baa;
            pvVar4 = _pthread_getspecific(in_ECX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012755a0(param_1,param_2);
            if (cVar2 != '\0') goto LAB_019a9baa;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      else {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 != '\0') {
            if (cVar3 == '\0') goto LAB_019a9baa;
            pvVar4 = _pthread_getspecific(in_ECX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012755a0(param_1,param_2);
            if (cVar2 != '\0') goto LAB_019a9baa;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
    }
LAB_019a9bfb:
    FUN_001159b0();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


