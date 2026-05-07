// Function: FUN_01c5faf0
// Address: 01c5faf0
// Size: 534 bytes
// Class: Unknown


int FUN_01c5faf0(undefined8 param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t in_ECX;
  int iVar4;
  longlong unaff_RDI;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong local_68;
  char local_60;
  char local_30;
  
  cVar1 = FUN_016bf360();
  iVar4 = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_016bf450();
    iVar4 = 1;
    if (cVar1 == '\0') {
      lVar3 = *(longlong *)(unaff_RDI + 0x188);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_016cb850(param_1,0);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_016bf2e0();
      dVar6 = (double)FUN_00e7c860();
      lVar3 = FUN_016bf310();
      dVar7 = (double)FUN_00e7c860();
      dVar10 = DAT_02394dd0 + dVar6;
      iVar4 = 0;
      if (dVar10 <= dVar5) {
        dVar7 = dVar7 + DAT_0238fee8;
        dVar11 = DAT_023942d0 + dVar7;
        if (dVar5 <= dVar11) {
          cVar1 = FUN_016bf500();
          iVar4 = 3;
          if ((cVar1 == '\0') && (cVar1 = FUN_016bf530(), cVar1 == '\0')) {
            FUN_01c45b80();
            if (lVar3 != 0) {
              FUN_01c45b80();
              iVar4 = *(int *)(local_68 + 0xc);
              if (local_60 != '\0') {
                FUN_00d50b20();
              }
              if (local_30 != '\0') {
                FUN_00d50b20();
              }
              if (iVar4 != 0) {
                return 3;
              }
            }
            dVar8 = (dVar11 - dVar10) * DAT_023934c8;
            dVar10 = dVar10 + dVar8;
            dVar9 = dVar6 + DAT_023942d0;
            if (dVar6 + DAT_023942d0 <= dVar10) {
              dVar9 = dVar10;
            }
            iVar4 = 2;
            if (dVar9 <= dVar5) {
              dVar11 = dVar11 - dVar8;
              dVar7 = dVar7 + DAT_02394dd0;
              if (dVar11 <= dVar7) {
                dVar7 = dVar11;
              }
              iVar4 = 4 - (uint)(dVar5 < dVar7);
            }
          }
        }
      }
    }
  }
  return iVar4;
}


