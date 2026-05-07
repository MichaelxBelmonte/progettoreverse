// Function: FUN_00248780
// Address: 00248780
// Size: 988 bytes
// Class: GNFilePath


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00248780(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  bool bVar10;
  double dVar11;
  undefined8 uVar12;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_026f6fa0;
  if (DAT_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar11 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar11 * DAT_023907c0);
  dVar11 = dVar11 * DAT_023907c0 - _DAT_023907c8;
  pVar9 = 0xaaaaaaab;
  uVar12 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  bVar4 = (byte)(((longlong)dVar11 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar12,&local_50);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((((plVar2 != (longlong *)0x0 & bVar4) != 0) && (*(int *)(unaff_RDI + 0x198) != 1)) &&
     (*(longlong *)(unaff_RDI + 0x1c0) != 0)) {
    FUN_006f3f00();
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00248937;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_00248937:
      cVar5 = FUN_00788fb0();
      if (cVar5 == '\0') {
        uVar7 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
        if (*(int *)(unaff_RDI + 0x198) != 2) {
          (**(code **)(*plVar3 + 0x628))();
          if (local_40 == (longlong *)0x0) {
            bVar10 = false;
          }
          else {
            (**(code **)(*plVar3 + 0x628))();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar5 = FUN_004a1190();
            if (cVar5 == '\0') {
              bVar10 = false;
            }
            else {
              (**(code **)(*plVar3 + 0x628))();
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004a11a0();
              bVar10 = local_70 != 0;
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar10) {
            (**(code **)(*plVar3 + 0x628))();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a11a0();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar6 = FUN_0170fee0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            uVar7 = (ulonglong)uVar6 ^ 1;
          }
        }
      }
      else {
        uVar7 = 0;
      }
      FUN_00d50b20();
      goto LAB_0024894c;
    }
  }
  uVar7 = 0;
LAB_0024894c:
  return uVar7 & 0xffffffff;
}


