// Function: FUN_00cdb0d0
// Address: 00cdb0d0
// Size: 955 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


bool FUN_00cdb0d0(uint64_t param_1)

{
  uint uVar1;
  uint64_t uVar2;
  uint *arg1;
  int64_t *this_ptr;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  uint local_258;
  uint local_254;
  uint64_t local_250;
  uint64_t local_248;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint8_t local_234 [16];
  uint8_t local_224 [16];
  uint8_t local_214 [16];
  uint8_t local_204 [16];
  uint8_t local_1f4 [16];
  uint8_t local_1e4 [16];
  uint8_t local_1d4 [16];
  uint8_t local_1c4 [16];
  uint8_t local_1b4 [16];
  uint8_t local_1a4 [16];
  uint8_t local_194 [16];
  uint8_t local_184 [16];
  uint8_t local_174 [16];
  uint8_t local_164 [16];
  uint8_t local_154 [16];
  uint8_t local_144 [16];
  uint8_t local_134 [16];
  uint8_t local_124 [16];
  uint8_t local_114 [16];
  uint8_t local_104 [16];
  uint8_t local_f4 [16];
  uint8_t local_e4 [16];
  uint8_t local_d4 [16];
  uint8_t local_c4 [16];
  uint8_t local_b4 [16];
  uint8_t local_a4 [16];
  uint8_t local_94 [16];
  uint8_t local_84 [16];
  uint8_t local_74 [16];
  uint8_t local_64 [16];
  uint8_t local_54 [16];
  uint8_t local_44 [16];
  uint64_t local_34;
  int64_t local_20;
  
  local_20 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  (**(code **)(**(int64_t **)(*this_ptr + 0x38) + 0x3a0))
            (param_1,*(void*)(arg1 + 0x8b));
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *arg1;
  local_258 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = arg1[1];
  local_254 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = *(uint64_t *)(arg1 + 2);
  local_250 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
              | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18
              | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar2 = *(uint64_t *)(arg1 + 4);
  local_248 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
              | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18
              | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar1 = arg1[6];
  local_240 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = arg1[7];
  local_23c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = arg1[8];
  local_238 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  local_234 = pshufb(*(uint8_t (*) [16])(arg1 + 9),g_023de250);
  local_224 = pshufb(*(uint8_t (*) [16])(arg1 + 0xd),g_023de250);
  local_214 = pshufb(*(uint8_t (*) [16])(arg1 + 0x11),g_023de250);
  local_204 = pshufb(*(uint8_t (*) [16])(arg1 + 0x15),g_023de250);
  local_1f4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x19),g_023de250);
  local_1e4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x1d),g_023de250);
  local_1d4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x21),g_023de250);
  local_1c4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x25),g_023de250);
  local_1b4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x29),g_023de250);
  local_1a4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x2d),g_023de250);
  local_194 = pshufb(*(uint8_t (*) [16])(arg1 + 0x31),g_023de250);
  local_184 = pshufb(*(uint8_t (*) [16])(arg1 + 0x35),g_023de250);
  local_174 = pshufb(*(uint8_t (*) [16])(arg1 + 0x39),g_023de250);
  local_164 = pshufb(*(uint8_t (*) [16])(arg1 + 0x3d),g_023de250);
  local_154 = pshufb(*(uint8_t (*) [16])(arg1 + 0x41),g_023de250);
  local_144 = pshufb(*(uint8_t (*) [16])(arg1 + 0x45),g_023de250);
  local_134 = pshufb(*(uint8_t (*) [16])(arg1 + 0x49),g_023de250);
  local_124 = pshufb(*(uint8_t (*) [16])(arg1 + 0x4d),g_023de250);
  local_114 = pshufb(*(uint8_t (*) [16])(arg1 + 0x51),g_023de250);
  local_104 = pshufb(*(uint8_t (*) [16])(arg1 + 0x55),g_023de250);
  local_f4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x59),g_023de250);
  local_e4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x5d),g_023de250);
  local_d4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x61),g_023de250);
  local_c4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x65),g_023de250);
  local_b4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x69),g_023de250);
  local_a4 = pshufb(*(uint8_t (*) [16])(arg1 + 0x6d),g_023de250);
  local_94 = pshufb(*(uint8_t (*) [16])(arg1 + 0x71),g_023de250);
  local_84 = pshufb(*(uint8_t (*) [16])(arg1 + 0x75),g_023de250);
  local_74 = pshufb(*(uint8_t (*) [16])(arg1 + 0x79),g_023de250);
  local_64 = pshufb(*(uint8_t (*) [16])(arg1 + 0x7d),g_023de250);
  local_54 = pshufb(*(uint8_t (*) [16])(arg1 + 0x81),g_023de250);
  local_44 = pshufb(*(uint8_t (*) [16])(arg1 + 0x85),g_023de250);
  uVar2 = *(uint64_t *)(arg1 + 0x89);
  local_34 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  *(int64_t *)(arg1 + 0x8d) = *(int64_t *)(arg1 + 0x8b) + 0x22c;
  (**(code **)(**(int64_t **)(*this_ptr + 0x38) + 0x388))(0x22c,&local_258);
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_20) {
    return local_268 == 0;
  }
                      ___stack_chk_fail();
}

