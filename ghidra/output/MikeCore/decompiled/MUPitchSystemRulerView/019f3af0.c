// Function: FUN_019f3af0
// Address: 019f3af0
// Size: 936 bytes
// Class: MUPitchSystemRulerView


/* WARNING: Removing unreachable block (ram,0x019f3c4e) */
/* WARNING: Removing unreachable block (ram,0x019f3c5a) */
/* WARNING: Removing unreachable block (ram,0x019f3e21) */
/* WARNING: Removing unreachable block (ram,0x019f3e2d) */
/* WARNING: Removing unreachable block (ram,0x019f3c37) */
/* WARNING: Removing unreachable block (ram,0x019f3c40) */
/* WARNING: Removing unreachable block (ram,0x019f3c13) */
/* WARNING: Removing unreachable block (ram,0x019f3c1c) */

undefined8 * FUN_019f3af0(undefined8 param_1,double param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined *puVar5;
  longlong *in_RDX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  
  dVar7 = (double)(**(code **)(*unaff_RSI + 0xa50))();
  if (((char)unaff_RSI[0x9f] != '\0') || (cVar2 = FUN_019a9840(), cVar2 == '\0')) {
    (**(code **)(*unaff_RSI + 0x9b8))(dVar7,param_2);
    return unaff_RDI;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if (*in_RDX == 0) {
    (**(code **)(*unaff_RSI + 0x988))();
    if (local_78 == 0) goto LAB_019f3e9e;
    bVar1 = true;
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_000ba510();
    if (local_78 == 0) {
      bVar1 = false;
    }
    else if (local_70 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      param_2 = param_2 + dVar7;
      iVar6 = 0;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f7cb0();
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_012f9490();
        if ((dVar8 <= param_2) && (dVar7 <= dVar9)) {
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = dVar7;
          if (dVar7 <= dVar8) {
            dVar10 = dVar8;
          }
          dVar8 = param_2;
          if (dVar9 <= param_2) {
            dVar8 = dVar9;
          }
          FUN_012e9900(dVar10,dVar8 - dVar10);
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          FUN_00d214d0();
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_78 + 0xc));
    }
    FUN_000be170();
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (!bVar1) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
LAB_019f3e9e:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


