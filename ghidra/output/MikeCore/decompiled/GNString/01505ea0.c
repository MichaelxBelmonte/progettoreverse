// Function: FUN_01505ea0
// Address: 01505ea0
// Size: 503 bytes
// Class: GNString


ulonglong FUN_01505ea0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  undefined7 uVar6;
  ulonglong uVar5;
  bool bVar7;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  uVar6 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if (*(longlong *)(unaff_RDI + 0x38) == 0) {
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    if (*(int *)(local_58 + 0xc) == 0) {
      bVar7 = true;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d280();
      if (*(int *)(local_68 + 0xc) == 0) {
        bVar7 = false;
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        bVar7 = *(int *)(local_78 + 0xc) == 0;
        if (local_70 != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71(uVar6,1);
    if ((!bVar7) && (lVar1 = *(longlong *)(unaff_RDI + 0x40), *(int *)(lVar1 + 0xc) != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)(lVar1 + 0xc) <= iVar4) {
          FUN_01507540();
          uVar5 = 0;
          goto LAB_01506085;
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_012cccd0();
        iVar4 = iVar4 + 1;
      } while (cVar2 == '\0');
      FUN_01507540();
    }
  }
LAB_01506085:
  return uVar5 & 0xffffffff;
}


