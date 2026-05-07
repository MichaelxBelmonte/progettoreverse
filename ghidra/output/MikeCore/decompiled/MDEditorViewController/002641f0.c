// Function: FUN_002641f0
// Address: 002641f0
// Size: 810 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x0026424e) */
/* WARNING: Removing unreachable block (ram,0x00264257) */
/* WARNING: Removing unreachable block (ram,0x002643b4) */
/* WARNING: Removing unreachable block (ram,0x002643c1) */

ulonglong FUN_002641f0(pthread_key_t param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x1c0) != 0) {
    FUN_006f3f00();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0026425c;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_0026425c:
      cVar1 = FUN_00751ba0();
      if ((cVar1 == '\0') || (*(int *)(unaff_RDI + 0x198) == 2)) {
LAB_0026432d:
        uVar3 = 0;
      }
      else {
        (**(code **)(*local_40 + 0x628))();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a11a0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) goto LAB_0026432d;
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01710590();
        if (cVar1 == '\0') {
          FUN_01caeae0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            FUN_01caeae0();
            FUN_01d66ab0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar3 = 0;
        }
        else {
          if (param_2 != '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0170fee0();
            FUN_0170fef0();
            FUN_00223fa0();
          }
          FUN_01caeae0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
          if (local_40 != (longlong *)0x0) {
            FUN_01caeae0();
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0170fee0();
            FUN_01d66ab0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_00264337;
    }
  }
  uVar3 = 0;
LAB_00264337:
  return uVar3 & 0xffffffff;
}


