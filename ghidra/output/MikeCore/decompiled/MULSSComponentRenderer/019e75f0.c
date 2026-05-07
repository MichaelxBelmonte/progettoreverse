// Function: FUN_019e75f0
// Address: 019e75f0
// Size: 505 bytes
// Class: MULSSComponentRenderer


/* WARNING: Removing unreachable block (ram,0x019e76dd) */
/* WARNING: Removing unreachable block (ram,0x019e76e6) */

void FUN_019e75f0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  longlong local_60;
  char local_58;
  
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x430);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x430) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(longlong *)(unaff_RDI + 0x1c0) = *unaff_RSI;
  uVar8 = FUN_00e7d6f0();
  *(undefined8 *)(unaff_RDI + 0x1d0) = uVar8;
  *(undefined8 *)(unaff_RDI + 0x1d8) = param_1;
  *(undefined8 *)(unaff_RDI + 0x1c8) = 0;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_019e76eb;
    }
  }
  else if (local_60 != 0) {
LAB_019e76eb:
    if (*(int *)(local_60 + 0xc) < 1) {
      iVar5 = 0;
      fVar9 = 0.0;
    }
    else {
      fVar9 = 0.0;
      iVar6 = 0;
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific(in_ECX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar7 = (float)FUN_013de3b0();
        bVar3 = !NAN(fVar7) && !NAN(fVar7);
        in_ECX = CONCAT31((int3)(in_ECX >> 8),bVar3);
        if (!NAN(fVar7)) {
          fVar9 = fVar9 + fVar7;
        }
        iVar5 = iVar5 + (uint)bVar3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_60 + 0xc));
    }
    FUN_001150f0();
    FUN_00d50b20();
    if (iVar5 != 0) {
      fVar9 = fVar9 / (float)iVar5;
      goto LAB_019e77d8;
    }
  }
  fVar9 = 0.0;
LAB_019e77d8:
  *(float *)(unaff_RDI + 0x1e0) = fVar9;
  return;
}


