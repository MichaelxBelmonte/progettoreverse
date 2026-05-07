// Function: FUN_01c74ab0
// Address: 01c74ab0
// Size: 911 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c74ab0(void* param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    if ((int)this_ptr[0x39] != 0) {
      lVar1 = this_ptr[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016d8300();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        uVar3 = FUN_016bf360();
        uVar7 = (uint64_t)uVar3;
        if (((char)uVar3 != '\0') && (param_2 != '\0')) {
          lVar1 = this_ptr[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_016cbba0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          cVar2 = FUN_016bf360();
          if (cVar2 != '\0') {
            FUN_016bf540();
          }
          lVar1 = this_ptr[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar4 = _pthread_getspecific(param_1);
          if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            lVar5 = this_ptr[0x42];
          }
          else {
            lVar5 = this_ptr[0x42];
          }
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          pVar6 = *(void* *)(this_ptr + 0x39);
          FUN_016effc0(pVar6,1);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = this_ptr[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_01c44d20();
          FUN_01c44700();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          FUN_01c62c70();
          lVar1 = this_ptr[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016c1150();
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x620))();
          *(void*)(this_ptr + 0x3a) = 1;
          uVar7 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
        }
        goto LAB_01c74b70;
      }
    }
  }
  uVar7 = 0;
LAB_01c74b70:
  return uVar7 & 0xffffffff;
}

