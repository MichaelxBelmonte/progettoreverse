// Function: FUN_01944f30
// Address: 01944f30
// Size: 590 bytes
// Class: Unknown

void FUN_01944f30(uint64_t param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  void* in_ECX;
  int64_t *this_ptr;
  float fVar7;
  float fVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  float fVar11;
  double dVar12;
  int64_t local_68;
  char local_60;
  int64_t local_30;
  char local_28;
  
  fVar11 = (float)((uint64_t)param_1 >> 0x20);
  fVar7 = (float)param_1;
  if (((((float)g_023dccdc != fVar7) || (NAN((float)g_023dccdc) || NAN(fVar7))) ||
      ((float)((uint64_t)g_023dccdc >> 0x20) != fVar11)) &&
     (cVar5 = (**(code **)(&UNK_000017d8 + *this_ptr))(), cVar5 != '\0')) {
    fVar8 = (float)(**(code **)(&UNK_00001750 + *this_ptr))();
    if ((fVar8 == 0.0) && (!NAN(fVar8))) {
      dVar12 = (double)(**(code **)(*this_ptr + 0x930))(g_02411264 + fVar7);
      dVar1 = (double)(**(code **)(*this_ptr + 0x930))(fVar7);
      (**(code **)(&UNK_00001668 + *this_ptr))();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar2 = (double)(**(code **)(*this_ptr + 0x930))(fVar7);
      dVar3 = (double)(**(code **)(&UNK_000016a8 + *this_ptr))();
      uVar9 = (**(code **)(*this_ptr + 0xc00))(fVar11);
      uVar10 = (**(code **)(*this_ptr + 3000))();
      dVar12 = g_02417a00 / (dVar12 - dVar1);
      FUN_0135b460(SUB84(dVar2 - dVar3,0),uVar9,
                   CONCAT44((int)((uint64_t)dVar12 >> 0x20),(float)dVar12),uVar10);
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
      (**(code **)(&UNK_000017d0 + *this_ptr))(fVar7);
      if (bVar4 || local_30 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  (**(code **)(&UNK_000017d0 + *this_ptr))((int)g_023dccdc);
  return;
}

