// Function: FUN_01688cf0
// Address: 01688cf0
// Size: 1370 bytes
// Class: Unknown
// String references:
//   "chordEntryCount >= 0"
//   "chordEntry != NULL"
//   "chordEntry->position > lastPosition"

void FUN_01688cf0(uint64_t param_1)

{
  double dVar1;
  int64_t lVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int64_t *plVar16;
  int64_t lVar17;
  void *pvVar18;
  void* pVar19;
  int iVar20;
  int iVar21;
  int64_t arg1;
  void*this_ptr;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar27;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  int64_t local_48;
  char local_40;
  
  lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30);
  iVar15 = (**(code **)(lVar2 + 0x38))();
  if (iVar15 < 0) {
    FUN_016aea20(extraout_XMM0_Qa,"chordEntryCount >= 0");
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    plVar16 = (int64_t *)FUN_00e8fc40();
    FUN_0111d0d0();
    (**(code **)(*plVar16 + 0x18))();
    if (iVar15 != 0) {
      iVar21 = 0;
      dVar3 = g_023b4830;
      do {
        lVar17 = (**(code **)(lVar2 + 0x40))(dVar3,iVar21);
        if (lVar17 == 0) {
          FUN_016aea20(extraout_XMM0_Qa_00,"chordEntry != NULL");
LAB_01689232:
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if (plVar16 == (int64_t *)0x0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        dVar1 = *(double *)(lVar17 + 0x1c);
        if (dVar1 <= dVar3) {
          FUN_016aea20(dVar1,"chordEntry->position > lastPosition");
          goto LAB_01689232;
        }
        FUN_01716350();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_01716a00();
        iVar20 = *(byte *)(lVar17 + 8) - 1;
        if (0xd < *(byte *)(lVar17 + 8)) {
          iVar20 = 0;
        }
        FUN_01715d40();
        iVar4 = *(byte *)(lVar17 + 9) - 1;
        if (0xd < *(byte *)(lVar17 + 9)) {
          iVar4 = 0;
        }
        FUN_01715d40();
        iVar5 = *(byte *)(lVar17 + 10) - 1;
        if (0xd < *(byte *)(lVar17 + 10)) {
          iVar5 = 0;
        }
        FUN_01715d40();
        iVar6 = *(byte *)(lVar17 + 0xb) - 1;
        if (0xd < *(byte *)(lVar17 + 0xb)) {
          iVar6 = 0;
        }
        FUN_01715d40();
        iVar7 = *(byte *)(lVar17 + 0xc) - 1;
        if (0xd < *(byte *)(lVar17 + 0xc)) {
          iVar7 = 0;
        }
        FUN_01715d40();
        iVar8 = *(byte *)(lVar17 + 0xd) - 1;
        if (0xd < *(byte *)(lVar17 + 0xd)) {
          iVar8 = 0;
        }
        FUN_01715d40();
        iVar9 = *(byte *)(lVar17 + 0xe) - 1;
        if (0xd < *(byte *)(lVar17 + 0xe)) {
          iVar9 = 0;
        }
        uVar27 = FUN_01715d40();
        iVar10 = *(byte *)(lVar17 + 0xf) - 1;
        if (0xd < *(byte *)(lVar17 + 0xf)) {
          iVar10 = 0;
        }
        uVar27 = FUN_01715d40(uVar27,iVar10);
        iVar11 = *(byte *)(lVar17 + 0x10) - 1;
        if (0xd < *(byte *)(lVar17 + 0x10)) {
          iVar11 = 0;
        }
        uVar27 = FUN_01715d40(uVar27,iVar11);
        iVar12 = *(byte *)(lVar17 + 0x11) - 1;
        if (0xd < *(byte *)(lVar17 + 0x11)) {
          iVar12 = 0;
        }
        uVar27 = FUN_01715d40(uVar27,iVar12);
        iVar13 = *(byte *)(lVar17 + 0x12) - 1;
        if (0xd < *(byte *)(lVar17 + 0x12)) {
          iVar13 = 0;
        }
        uVar27 = FUN_01715d40(uVar27,iVar13);
        iVar14 = *(byte *)(lVar17 + 0x13) - 1;
        if (0xd < *(byte *)(lVar17 + 0x13)) {
          iVar14 = 0;
        }
        FUN_01715d40(uVar27,iVar14);
        auVar31._0_4_ = -(uint)(iVar7 == 0);
        auVar31._4_4_ = -(uint)(iVar8 == 0);
        auVar31._8_4_ = -(uint)(iVar9 == 0);
        auVar31._12_4_ = -(uint)(iVar10 == 0);
        auVar30._0_4_ = -(uint)(iVar20 == 0);
        auVar30._4_4_ = -(uint)(iVar4 == 0);
        auVar30._8_4_ = -(uint)(iVar5 == 0);
        auVar30._12_4_ = -(uint)(iVar6 == 0);
        auVar31 = packssdw(auVar30,auVar31);
        pVar19 = (void*)
                 CONCAT71((int7)((uint64_t)param_1 >> 8),
                          iVar13 == 0 || (iVar12 == 0 || iVar11 == 0));
        auVar29._0_4_ = -(uint)(iVar7 == -1);
        auVar29._4_4_ = -(uint)(iVar8 == -1);
        auVar29._8_4_ = -(uint)(iVar9 == -1);
        auVar29._12_4_ = -(uint)(iVar10 == -1);
        auVar28._0_4_ = -(uint)(iVar20 == -1);
        auVar28._4_4_ = -(uint)(iVar4 == -1);
        auVar28._8_4_ = -(uint)(iVar5 == -1);
        auVar28._12_4_ = -(uint)(iVar6 == -1);
        auVar29 = packssdw(auVar28,auVar29);
        auVar29 = packsswb(auVar29,auVar29);
        bVar22 = (byte)(SUB161(auVar29 >> 7,0) & 1 | (SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar29 >> 0x17,0) & 1) << 2 | (SUB161(auVar29 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar29 >> 0x2f,0) & 1) << 5 | (SUB161(auVar29 >> 0x37,0) & 1) << 6
                       | SUB161(auVar29 >> 0x3f,0) << 7) != 0xff;
        bVar23 = iVar11 != -1;
        bVar24 = iVar12 != -1;
        bVar25 = iVar13 != -1;
        bVar26 = iVar14 != -1;
        if (((iVar14 == 0 || (iVar13 == 0 || (iVar12 == 0 || iVar11 == 0))) ||
             ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x2f,0) & 1) != 0) || (SUB161(auVar31 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0')) &&
           ((bVar26 || (bVar25 || (bVar24 || bVar23))) || bVar22)) {
          FUN_01715d80();
        }
        if (iVar21 == 0) {
          uVar27 = FUN_00e7bdb0();
        }
        else {
          uVar27 = *(void*)(lVar17 + 0x1c);
          FUN_00e7bcc0();
          uVar27 = FUN_00e7cd00(uVar27);
        }
        pvVar18 = _pthread_getspecific(pVar19);
        if (pvVar18 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (local_48 != 0 && ((bVar26 || (bVar25 || (bVar24 || bVar23))) || bVar22)) {
          FUN_00d50b00();
          lVar17 = local_48;
        }
        else {
          lVar17 = 0;
        }
        param_1 = FUN_00e7bdb0();
        local_40 = '\0';
        FUN_012502a0(param_1,uVar27,0);
        if ((local_48 != 0 && ((bVar26 || (bVar25 || (bVar24 || bVar23))) || bVar22) ||
            ((bVar26 || (bVar25 || (bVar24 || bVar23))) || bVar22)) && lVar17 != 0) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        iVar21 = iVar21 + 1;
        dVar3 = dVar1;
        local_48 = lVar17;
      } while (iVar15 != iVar21);
    }
    *this_ptr = plVar16;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

