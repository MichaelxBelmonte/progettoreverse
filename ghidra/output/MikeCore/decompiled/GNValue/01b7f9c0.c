// Function: FUN_01b7f9c0
// Address: 01b7f9c0
// Size: 894 bytes
// Class: GNValue


ulonglong FUN_01b7f9c0(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 unaff_RBX;
  undefined7 uVar9;
  longlong *unaff_RDI;
  ulonglong uVar10;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*unaff_RDI + 0xa78))();
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*unaff_RDI + 0x9d0))(), cVar3 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar4 = (**(code **)(*unaff_RDI + 0x9d8))();
    uVar5 = (**(code **)(*unaff_RDI + 0x9e0))();
    uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if ((*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') &&
       (param_1 = (pthread_key_t)(uVar4 >> 0x20), uVar4 >> 0x20 == 0)) {
      bVar2 = uVar5 >> 0x20 == 0;
      uVar7 = CONCAT71(uVar9,!bVar2);
      if (bVar2) goto LAB_01b7fa37;
    }
    else {
      uVar7 = CONCAT71(uVar9,1);
    }
    if (param_2 != '\0') {
      (**(code **)(*unaff_RDI + 0xa48))();
      if (*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') {
        if (uVar4 >> 0x20 == 0) {
          if (uVar5 >> 0x20 == 0) {
            bVar2 = false;
            uVar10 = 0;
          }
          else {
            lVar1 = unaff_RDI[0x2b];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e7c260();
            uVar7 = uVar5;
            FUN_012521f0(uVar5,0,0,0);
            param_1 = (pthread_key_t)CONCAT71((int7)(uVar7 >> 8),local_40[0]);
            pcVar8 = local_38;
            if (local_40[0] != '\0') {
              pcVar8 = local_40;
            }
            local_38[0] = local_40[0];
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (uVar5 != 0)) {
              FUN_00d50b20();
            }
            if (uVar5 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
              if (local_38[0] == '\0') {
                FUN_00d50b00();
              }
            }
            uVar10 = uVar5;
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          lVar1 = unaff_RDI[0x2b];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e7c280();
          uVar7 = uVar4;
          FUN_012521f0(uVar4,0,0,0);
          param_1 = (pthread_key_t)CONCAT71((int7)(uVar7 >> 8),local_40[0]);
          pcVar8 = local_38;
          if (local_40[0] != '\0') {
            pcVar8 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar8 = '\0';
          if ((local_40[0] != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
          if (uVar4 == 0) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            if (local_38[0] == '\0') {
              FUN_00d50b00();
            }
          }
          uVar10 = uVar4;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        bVar2 = false;
        uVar10 = 0;
      }
      lVar1 = unaff_RDI[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40[0] = '\0';
      FUN_012502a0(uVar5,uVar4,(char)unaff_RDI[0x36]);
      if ((local_40[0] != '\0') && (uVar10 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xa50))();
      uVar7 = CONCAT71((int7)(uVar5 >> 8),1);
      if ((bVar2) && (uVar10 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01b7fa37:
  return uVar7 & 0xffffffff;
}


