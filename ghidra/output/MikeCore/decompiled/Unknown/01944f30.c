// Function: FUN_01944f30
// Address: 01944f30
// Size: 590 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019450de) */
/* WARNING: Removing unreachable block (ram,0x01945154) */
/* WARNING: Removing unreachable block (ram,0x0194515d) */
/* WARNING: Removing unreachable block (ram,0x019450e7) */
/* WARNING: Removing unreachable block (ram,0x0194510d) */
/* WARNING: Removing unreachable block (ram,0x01945116) */

void FUN_01944f30(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  longlong local_68;
  char local_60;
  longlong local_30;
  char local_28;
  
  fVar11 = (float)((ulonglong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  if (((((float)DAT_023dccdc != fVar7) || (NAN((float)DAT_023dccdc) || NAN(fVar7))) ||
      ((float)((ulonglong)DAT_023dccdc >> 0x20) != fVar11)) &&
     (cVar5 = (**(code **)(&UNK_000017d8 + *unaff_RDI))(), cVar5 != '\0')) {
    fVar8 = (float)(**(code **)(&UNK_00001750 + *unaff_RDI))();
    if ((fVar8 == 0.0) && (!NAN(fVar8))) {
      dVar12 = (double)(**(code **)(*unaff_RDI + 0x930))(DAT_02411264 + fVar7);
      dVar1 = (double)(**(code **)(*unaff_RDI + 0x930))(fVar7);
      (**(code **)(&UNK_00001668 + *unaff_RDI))();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar2 = (double)(**(code **)(*unaff_RDI + 0x930))(fVar7);
      dVar3 = (double)(**(code **)(&UNK_000016a8 + *unaff_RDI))();
      uVar9 = (**(code **)(*unaff_RDI + 0xc00))(fVar11);
      uVar10 = (**(code **)(*unaff_RDI + 3000))();
      dVar12 = DAT_02417a00 / (dVar12 - dVar1);
      FUN_0135b460(SUB84(dVar2 - dVar3,0),uVar9,
                   CONCAT44((int)((ulonglong)dVar12 >> 0x20),(float)dVar12),uVar10);
      if (local_30 == 0) {
        bVar4 = true;
      }
      else if (local_28 == '\0') {
        FUN_00d50b00();
        bVar4 = false;
      }
      else {
        bVar4 = false;
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_000017d0 + *unaff_RDI))(fVar7);
      if (bVar4 || local_30 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  (**(code **)(&UNK_000017d0 + *unaff_RDI))((int)DAT_023dccdc);
  return;
}


