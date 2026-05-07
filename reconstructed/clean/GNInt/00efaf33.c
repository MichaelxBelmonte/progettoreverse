// Function: FUN_00efaf33
// Address: 00efaf33
// Size: 2094 bytes
// Class: GNInt
// String references:
//   "crypto/bio/bio_meth.c"
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


int64_t FUN_00efaf33(int param_1,uint *param_2,int param_3,int param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t arg1;
  uint64_t uVar11;
  int iVar12;
  void*this_ptr;
  uint64_t uVar13;
  uint uVar14;
  int64_t lVar15;
  int local_res8;
  
  if (((*(int *)((int64_t)this_ptr + 0x8c) == 0) || (local_res8 != 0)) &&
     ((param_2[6] == 1 || ((param_2[6] - 3 < 3 && (param_1 == 1)))))) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4L << ((byte)param_2[1] & 0x3f);
  }
  lVar15 = 1L << ((byte)param_2[2] & 0x3f);
  uVar14 = 0;
  if ((local_res8 == 1) && (uVar14 = 0, param_2[4] == 3)) {
    uVar14 = 0x11;
    if (*param_2 < 0x11) {
      uVar14 = *param_2;
    }
  }
  if (param_4 == 1) {
    this_ptr[4] = 0;
    iVar10 = 0x2009a1e;
    this_ptr[1] = " ";
    this_ptr[2] = " ";
    iVar12 = 0x2009a20;
    *this_ptr = "crypto/bio/bio_meth.c";
    uVar11 = *(uint64_t *)(arg1 + 0x10);
    *(uint64_t *)(arg1 + 0x20) = uVar11;
  }
  else {
    iVar12 = (int)*this_ptr;
    iVar10 = (int)this_ptr[1];
    uVar11 = *(uint64_t *)(arg1 + 0x10);
  }
  *(uint *)(this_ptr + 6) = uVar14;
  *(void*)((int64_t)this_ptr + 300) = 0;
  iVar12 = iVar12 - iVar10;
  *(int *)((int64_t)this_ptr + 0x1c) = iVar12;
  *(int *)(this_ptr + 3) = iVar12;
  *(int *)((int64_t)this_ptr + 0x2c) = iVar12;
  *(void*)(this_ptr + 5) = 0;
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  this_ptr[0x1f] = 0;
  *(uint64_t *)(arg1 + 0x18) = uVar11;
  if (*(int *)(arg1 + 0x40) == 0) {
    *(uint64_t *)(arg1 + 0x20) = uVar11;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar8 = (uint64_t)(-(int)uVar11 & 0x3f);
    uVar13 = uVar11 + uVar8;
    if (uVar13 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar13;
      *(uint64_t *)(arg1 + 0x18) = uVar13;
      if (uVar8 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar13;
      }
      *(void*)(arg1 + 0x40) = 1;
      uVar11 = uVar13;
      goto LAB_00efb102;
    }
    this_ptr[0xe] = 0;
    lVar1 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar1;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar8 = (uint64_t)(-(int)lVar1 & 0x3f);
    uVar13 = lVar1 + uVar8;
    if (uVar13 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar13;
      *(uint64_t *)(arg1 + 0x18) = uVar13;
      if (uVar8 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar13;
      }
      *(void*)(arg1 + 0x40) = 1;
      goto LAB_00efb127;
    }
    uVar13 = 0;
    this_ptr[0x10] = 0;
    uVar8 = 4L << ((byte)uVar14 & 0x3f);
    if (uVar14 == 0) {
      uVar8 = uVar13;
    }
    lVar5 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar5;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar9 = (uint64_t)(-(int)lVar5 & 0x3f);
    uVar6 = lVar5 + uVar9;
    if (uVar6 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar6;
      *(uint64_t *)(arg1 + 0x18) = uVar6;
      if (uVar9 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar6;
      }
      *(void*)(arg1 + 0x40) = 1;
      goto LAB_00efb158;
    }
  }
  else {
LAB_00efb102:
    uVar13 = lVar15 * 4 + uVar11;
    if (*(uint64_t *)(arg1 + 0x28) < uVar13) {
      *(void*)(arg1 + 0x38) = 1;
      uVar8 = 0;
      uVar13 = uVar11;
    }
    else {
      *(uint64_t *)(arg1 + 0x18) = uVar13;
      uVar8 = uVar11;
    }
    this_ptr[0xe] = uVar8;
LAB_00efb127:
    uVar6 = lVar5 + uVar13;
    if (*(uint64_t *)(arg1 + 0x28) < uVar6) {
      *(void*)(arg1 + 0x38) = 1;
      uVar6 = uVar13;
      uVar13 = 0;
    }
    else {
      *(uint64_t *)(arg1 + 0x18) = uVar6;
    }
    this_ptr[0x10] = uVar13;
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = 4L << ((byte)uVar14 & 0x3f);
    }
LAB_00efb158:
    uVar11 = uVar8 + uVar6;
    if (*(uint64_t *)(arg1 + 0x28) < uVar11) {
      *(void*)(arg1 + 0x38) = 1;
      uVar13 = 0;
      uVar11 = uVar6;
    }
    else {
      *(uint64_t *)(arg1 + 0x18) = uVar11;
      uVar13 = uVar6;
    }
  }
  this_ptr[0xf] = uVar13;
  if (*(char *)(arg1 + 0x38) != '\0') {
    return -0x40;
  }
  if (param_3 != 1) {
    uVar13 = *(uint64_t *)(arg1 + 0x20);
    if (uVar13 < uVar11) {
      ___bzero();
      uVar11 = *(uint64_t *)(arg1 + 0x18);
      uVar13 = *(uint64_t *)(arg1 + 0x20);
    }
    if (uVar13 < uVar11) {
      *(uint64_t *)(arg1 + 0x20) = uVar11;
    }
  }
  if ((param_2[6] - 3 < 3) && (param_1 == 1)) {
    uVar13 = lVar15 + 0x3fU & 0xffffffffffffffc0;
    uVar14 = *(uint *)(arg1 + 0x40);
    if (local_res8 == 1) {
      if (uVar14 == 0) {
        lVar5 = *(int64_t *)(arg1 + 0x10);
        *(int64_t *)(arg1 + 0x20) = lVar5;
        *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
        uVar8 = (uint64_t)(-(int)lVar5 & 0x3f);
        uVar11 = lVar5 + uVar8;
        if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
          *(uint64_t *)(arg1 + 0x10) = uVar11;
          *(uint64_t *)(arg1 + 0x18) = uVar11;
          if (uVar8 != 0) {
            *(uint64_t *)(arg1 + 0x20) = uVar11;
          }
          *(void*)(arg1 + 0x40) = 1;
          goto LAB_00efb233;
        }
LAB_00efb2fa:
        uVar13 = 0;
      }
      else {
LAB_00efb233:
        if (uVar13 == 0) goto LAB_00efb2fa;
        lVar5 = *(int64_t *)(arg1 + 0x28);
        uVar13 = lVar5 - uVar13;
        if (uVar13 < uVar11) {
          *(void*)(arg1 + 0x38) = 1;
          goto LAB_00efb2fa;
        }
        if (uVar13 < *(uint64_t *)(arg1 + 0x20)) {
          *(uint64_t *)(arg1 + 0x20) = uVar13;
        }
        *(uint64_t *)(arg1 + 0x28) = uVar13;
        if (lVar5 == 0) goto LAB_00efb2fa;
        if (uVar13 < *(uint64_t *)(arg1 + 0x30)) {
          ___bzero();
          *(uint64_t *)(arg1 + 0x30) = uVar13;
        }
      }
      this_ptr[7] = uVar13;
      uVar11 = this_ptr[0xc];
      uVar11 = ((uVar11 << 0x28 | uVar11 >> 0x18) ^ uVar11 ^ (uVar11 << 0xf | uVar11 >> 0x31)) *
               -0x604de39ae16720db;
      uVar11 = ((uVar11 >> 0x23) + 8 ^ uVar11) * -0x604de39ae16720db;
      uVar13 = (uint64_t)*(uint *)(this_ptr + 0xd);
      uVar13 = (uVar13 << 0xf ^ uVar13 ^
               (uVar13 << 0x28 | (uint64_t)(*(uint *)(this_ptr + 0xd) >> 0x18))) *
               -0x604de39ae16720db;
      uVar13 = ((uVar13 >> 0x23) + 4 ^ uVar13) * -0x604de39ae16720db;
      this_ptr[0xc] = uVar11 ^ uVar13 ^ uVar11 >> 0x1c ^ uVar13 >> 0x1c;
    }
    else {
      if (uVar14 < 2) {
        if (uVar14 != 0) {
LAB_00efb280:
          *(void*)(arg1 + 0x40) = 2;
          goto LAB_00efb288;
        }
        lVar5 = *(int64_t *)(arg1 + 0x10);
        *(int64_t *)(arg1 + 0x20) = lVar5;
        *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
        uVar8 = (uint64_t)(-(int)lVar5 & 0x3f);
        uVar11 = lVar5 + uVar8;
        if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
          *(uint64_t *)(arg1 + 0x10) = uVar11;
          *(uint64_t *)(arg1 + 0x18) = uVar11;
          if (uVar8 != 0) {
            *(uint64_t *)(arg1 + 0x20) = uVar11;
          }
          goto LAB_00efb280;
        }
LAB_00efb3a8:
        uVar13 = 0;
      }
      else {
LAB_00efb288:
        if (uVar13 == 0) goto LAB_00efb3a8;
        uVar13 = *(int64_t *)(arg1 + 0x28) - uVar13;
        if (uVar13 < uVar11) {
          *(void*)(arg1 + 0x38) = 1;
          goto LAB_00efb3a8;
        }
        if (uVar13 < *(uint64_t *)(arg1 + 0x20)) {
          *(uint64_t *)(arg1 + 0x20) = uVar13;
        }
        *(uint64_t *)(arg1 + 0x28) = uVar13;
      }
      this_ptr[7] = uVar13;
      ___bzero();
      this_ptr[0xc] = 0;
    }
    uVar14 = 6;
    if (param_2[3] < 6) {
      uVar14 = param_2[3];
    }
    uVar7 = 4;
    if (4 < uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((int64_t)this_ptr + 0x34) = param_2[2] - uVar7;
  }
  if ((local_res8 != 1) || (param_2[6] < 7)) goto LAB_00efb52a;
  if (*(uint *)(arg1 + 0x40) < 2) {
    if (*(uint *)(arg1 + 0x40) != 0) {
LAB_00efb40b:
      *(void*)(arg1 + 0x40) = 2;
      goto LAB_00efb413;
    }
    lVar5 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar5;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar13 = (uint64_t)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar11;
      *(uint64_t *)(arg1 + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      goto LAB_00efb40b;
    }
    this_ptr[0x12] = 0;
    lVar5 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar5;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar13 = (uint64_t)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar11;
      *(uint64_t *)(arg1 + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(void*)(arg1 + 0x40) = 2;
      goto LAB_00efb442;
    }
    this_ptr[0x13] = 0;
    lVar5 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar5;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar13 = (uint64_t)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar11;
      *(uint64_t *)(arg1 + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(void*)(arg1 + 0x40) = 2;
      goto LAB_00efb471;
    }
    this_ptr[0x14] = 0;
    lVar5 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar5;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar13 = (uint64_t)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar11;
      *(uint64_t *)(arg1 + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(void*)(arg1 + 0x40) = 2;
      goto LAB_00efb4a0;
    }
    this_ptr[0x15] = 0;
    lVar5 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar5;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar13 = (uint64_t)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar11;
      *(uint64_t *)(arg1 + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(void*)(arg1 + 0x40) = 2;
      goto LAB_00efb4cc;
    }
    this_ptr[0x16] = 0;
    lVar5 = *(int64_t *)(arg1 + 0x10);
    *(int64_t *)(arg1 + 0x20) = lVar5;
    *(uint64_t *)(arg1 + 0x30) = *(uint64_t *)(arg1 + 8) & 0xffffffffffffffc0;
    uVar13 = (uint64_t)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(uint64_t *)(arg1 + 8)) {
      *(uint64_t *)(arg1 + 0x10) = uVar11;
      *(uint64_t *)(arg1 + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(void*)(arg1 + 0x40) = 2;
      goto LAB_00efb4fb;
    }
LAB_00efb511:
    uVar11 = 0;
  }
  else {
LAB_00efb413:
    uVar11 = *(int64_t *)(arg1 + 0x28) - 0x400;
    if (uVar11 < *(uint64_t *)(arg1 + 0x18)) {
      *(void*)(arg1 + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(uint64_t *)(arg1 + 0x20)) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(uint64_t *)(arg1 + 0x28) = uVar11;
    }
    this_ptr[0x12] = uVar11;
LAB_00efb442:
    uVar11 = *(int64_t *)(arg1 + 0x28) - 0xc0;
    if (uVar11 < *(uint64_t *)(arg1 + 0x18)) {
      *(void*)(arg1 + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(uint64_t *)(arg1 + 0x20)) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(uint64_t *)(arg1 + 0x28) = uVar11;
    }
    this_ptr[0x13] = uVar11;
LAB_00efb471:
    uVar11 = *(int64_t *)(arg1 + 0x28) - 0x100;
    if (uVar11 < *(uint64_t *)(arg1 + 0x18)) {
      *(void*)(arg1 + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(uint64_t *)(arg1 + 0x20)) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(uint64_t *)(arg1 + 0x28) = uVar11;
    }
    this_ptr[0x14] = uVar11;
LAB_00efb4a0:
    uVar11 = *(int64_t *)(arg1 + 0x28) - 0x80;
    if (uVar11 < *(uint64_t *)(arg1 + 0x18)) {
      *(void*)(arg1 + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(uint64_t *)(arg1 + 0x20)) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(uint64_t *)(arg1 + 0x28) = uVar11;
    }
    this_ptr[0x15] = uVar11;
LAB_00efb4cc:
    uVar11 = *(int64_t *)(arg1 + 0x28) - 0x8040;
    if (uVar11 < *(uint64_t *)(arg1 + 0x18)) {
      *(void*)(arg1 + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(uint64_t *)(arg1 + 0x20)) {
        *(uint64_t *)(arg1 + 0x20) = uVar11;
      }
      *(uint64_t *)(arg1 + 0x28) = uVar11;
    }
    this_ptr[0x16] = uVar11;
LAB_00efb4fb:
    uVar11 = *(int64_t *)(arg1 + 0x28) - 0x1c040;
    if (uVar11 < *(uint64_t *)(arg1 + 0x18)) {
      *(void*)(arg1 + 0x38) = 1;
      goto LAB_00efb511;
    }
    if (uVar11 < *(uint64_t *)(arg1 + 0x20)) {
      *(uint64_t *)(arg1 + 0x20) = uVar11;
    }
    *(uint64_t *)(arg1 + 0x28) = uVar11;
  }
  this_ptr[0x17] = uVar11;
LAB_00efb52a:
  uVar2 = *(void*)param_2;
  uVar3 = *(void*)(param_2 + 2);
  uVar4 = *(void*)(param_2 + 5);
  *(void*)((int64_t)this_ptr + 0x10c) = *(void*)(param_2 + 3);
  *(void*)((int64_t)this_ptr + 0x114) = uVar4;
  this_ptr[0x20] = uVar2;
  this_ptr[0x21] = uVar3;
  return (uint64_t)(*(char *)(arg1 + 0x38) == '\0') * 0x40 + -0x40;
}

