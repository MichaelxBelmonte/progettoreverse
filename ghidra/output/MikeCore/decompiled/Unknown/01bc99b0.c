// Function: FUN_01bc99b0
// Address: 01bc99b0
// Size: 909 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc99b0(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  char *pcVar9;
  char unaff_SIL;
  longlong *unaff_RDI;
  double dVar10;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (unaff_RDI[0x2c] != 0) {
    if (unaff_SIL == '\0') {
      (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x398))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        bVar2 = true;
        bVar1 = true;
        if (*(int *)(local_58 + 0xc) != 0) {
          FUN_00d23340();
          local_38[0] = local_50[0];
          pcVar9 = local_38;
          pcVar7 = local_50;
          if (local_50[0] == '\0') {
            pcVar7 = pcVar9;
          }
          *pcVar7 = '\0';
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          lVar3 = local_48;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          bVar1 = bVar2;
          if (lVar3 != 0) {
            FUN_00d23340();
            pcVar9 = local_38;
            pcVar7 = local_50;
            if (local_50[0] == '\0') {
              pcVar7 = pcVar9;
            }
            local_38[0] = local_50[0];
            *pcVar7 = '\0';
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            pVar8 = (pthread_key_t)pcVar9;
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126ef70();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0124c5d0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (cVar4 != '\0') {
              dVar10 = (double)FUN_00e7d6f0();
              if (dVar10 - (double)unaff_RDI[0x2d] <= _DAT_0240e390) {
                bVar1 = false;
              }
              else {
                unaff_RDI[0x2d] = (longlong)dVar10;
              }
            }
          }
        }
        FUN_00d50b20();
        if (!bVar1) goto LAB_01bc9cd8;
      }
      if (unaff_RDI[0x2c] != 0) goto LAB_01bc9c8d;
    }
    else {
LAB_01bc9c8d:
      unaff_RDI[0x2c] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x620))();
  }
  if ((unaff_SIL != '\0') && (unaff_RDI[0x2f] != 0)) {
    unaff_RDI[0x2f] = 0;
    FUN_00d50b20();
    (**(code **)(*unaff_RDI + 0x620))();
  }
LAB_01bc9cd8:
  if (unaff_RDI[0x2f] == 0) {
    FUN_01bc6eb0();
  }
  else {
    dVar10 = (double)FUN_00e7d6f0();
    dVar10 = dVar10 + DAT_023b3490;
    uVar5 = FUN_00e7dff0();
    FUN_01bc9e60(dVar10 + ((double)uVar5 / _DAT_023934c0) * DAT_02422870);
  }
  return;
}


