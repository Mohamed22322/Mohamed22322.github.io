<!DOCTYPE html>
<html lang="ar">
<head>
  <meta charset="UTF-8">
  <title>سبحة إلكترونية تصميم_محمد-حيدر </title>

  <!-- خط عربي جميل -->
  <link href="https://fonts.googleapis.com/css2?family=Tajawal :wght@500&display=swap" rel="stylesheet">

  <style>
    body {
      text-align: center;
      font-family: 'Tajawal', sans-serif;
      background-color: #f7f9fc;
      padding-top: 50px;
      margin-bottom: 120px;
    }

    .tasbih-container {
      position: relative;
      display: inline-block;
      background: white;
      border-radius: 15px;
      box-shadow: 0 6px 15px rgba(0,0,0,0.15);
    }

    .tasbih-image {
      width: 300px;
      height: auto;
      display: block;
      border-radius: 15px;
    }

    .counter-display {
      position: absolute;
      top: 65px;
      left: 50px;
      width: 155px;
      font-size: 36px;
      font-weight: bold;
      text-align: center;
      color: black;
      padding: 10px;
    }

    .btn-large, .btn-small {
      position: absolute;
      border: none;
      border-radius: 50%;
      cursor: pointer;
      color: white;
      font-weight: bold;
      z-index: 2;
      box-shadow: 0 6px 12px rgba(0,0,0,0.3);
      transition: transform 0.2s ease, box-shadow 0.2s ease;
    }

    .btn-large {
      width: 100px;
      height: 100px;
      top: 72%;
      left: 45%;
      transform: translate(-50%, -50%);
      background-color: black;
      font-size: 24px;
    }

    .btn-small {
      width: 30px;
      height: 30px;
      top: 55%;
      left: 68%;
      transform: translate(-50%, -50%);
      background-color: red;
      font-size: 18px;
    }

    /* تأثير عند الضغط على الأزرار */
    .btn-large:active, .btn-small:active {
      transform: translate(-50%, -50%) scale(0.95);
      box-shadow: 0 2px 6px rgba(0,0,0,0.2);
    }

    /* النص الثابت مع تأثير الإضاءة */
    .static-text {
      margin: 30px auto;
      max-width: 600px;
      padding: 18px 25px;
      background: linear-gradient(to right, #fff3cd, #fff0c7, #fff3cd);
      border: 1px solid #ffe4b5;
      border-radius: 12px;
      font-size: 22px;
      color: #333;
      font-weight: bold;
      position: relative;
      overflow: hidden;
    }

    .static-text::before {
      content: '';
      position: absolute;
      top: 0;
      left: -100%;
      width: 100%;
      height: 100%;
      background: linear-gradient(120deg, transparent, rgba(255, 255, 255, 0.6), transparent);
      animation: shine 3s ease-in-out infinite;
    }

    @keyframes shine {
      0% { left: -100%; }
      50% { left: 100%; }
      100% { left: 100%; }
    }

    /* النص المتحرك */
    .moving-text {
      position: fixed;
      bottom: 0;
      width: 100%;
      overflow: hidden;
      white-space: nowrap;
      background: #e8f5e9;
      box-shadow: 0 -2px 5px rgba(0,0,0,0.1);
      padding: 10px 0;
    }

    .marquee {
      display: inline-block;
      padding-left: 100%;
      animation: marquee 20s linear infinite;
      font-size: 18px;
      color: #2e7d32;
      font-weight: bold;
    }

    @keyframes marquee {
      from { transform: translateX(100%); }
      to { transform: translateX(-100%); }
    }
  </style>
</head>
<body>

  <div class="tasbih-container">
    <!-- الصورة -->
    <img src="https://i.ibb.co/LDTXWXFv/Picsart-25-05-16-14-49-41-782.png " alt="سبحة" class="tasbih-image">

    <!-- شاشة العدد -->
    <div id="counter" class="counter-display">0</div>

    <!-- زر التسبيح الكبير -->
    <button class="btn-large" onclick="increment()"></button></button>

    <!-- زر إعادة التعيين الصغير -->
    <button class="btn-small" onclick="reset()">⟳</button>
  </div>

  <!-- النص الثابت مع تأثير الإضاءة -->
  <div class="static-text">
    إلهم صلي وسلم على سيدنا محمد عليه أفضل الصلاة والسلام
  </div>

  <!-- النص المتحرك -->
  <div class="moving-text">
    <div class="marquee"> 🔰 تصميم_محمد-حيدر 🔰</div>
  </div>

  <script>
    let count = 0;

    function increment() {
      count++;
      document.getElementById('counter').innerText = count;
    }

    function reset() {
      count = 0;
      document.getElementById('counter').innerText = count;
    }
  </script>

</body>
</html></script>
</body>
</html>
